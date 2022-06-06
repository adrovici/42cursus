/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 11:09:39 by umartin-          #+#    #+#             */
/*   Updated: 2022/06/06 16:09:15 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	*philo_routine(void *philoid)
{
}

void	main_function( t_philo *philo)
{
	int			i;

	philo->philosophers = malloc(sizeof(pthread_t)
			* philo->number_of_philosophers);
	i = 0;
	while (i < philo->number_of_philosophers)
	{
		pthread_create(&philo->philosophers[i], NULL, philo_routine, NULL);
		i++;
		printf ("Philo %d created\n", i);
	}
}
