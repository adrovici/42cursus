/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 12:27:06 by umartin-          #+#    #+#             */
/*   Updated: 2022/05/30 14:15:47 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	main(int ac, char **av)
{
	t_philo	philo;

	if (ac < 5 || ac > 6)
	{
		printf("\033[0;31m");
		printf ("Formato incorrecto\n");
		return (0);
	}
	if (checker (av))
	{
		printf("\033[0;31m");
		printf ("Sólo se admiten números\n");
		return (0);
	}
	philo_init(av, &philo);
	if (!philo_checker(&philo))
	{
		printf("\033[0;31m");
		printf ("Número invalido\n");
		return (0);
	}
	printf ("%i\n", philo.number_of_philosophers);
	printf ("%i\n", philo.time_to_eat);
}

void	philo_init(char **av, t_philo *philo)
{
	philo->number_of_philosophers = ft_atoi(av[1]);
	philo->time_to_die = ft_atoi(av[2]);
	philo->time_to_eat = ft_atoi(av[3]);
	philo->time_to_sleep = ft_atoi(av[4]);
	philo->number_of_times_each_philosopher_must_eat = ft_atoi(av[5]);
}

int	philo_checker(t_philo *philo)
{
	if (philo->number_of_philosophers <= 0 || philo->time_to_die <= 0
		|| philo->time_to_eat <= 0 || philo->time_to_sleep <= 0
		|| philo->number_of_times_each_philosopher_must_eat <= 0)
		return (0);
	return (1);
}
