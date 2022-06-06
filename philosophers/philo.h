/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 13:58:58 by umartin-          #+#    #+#             */
/*   Updated: 2022/06/06 14:54:49 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <pthread.h>
# include <time.h>

typedef struct s_philo
{
	int			number_of_philosophers;
	int			time_to_die;
	int			time_to_eat;
	int			time_to_sleep;
	int			number_of_times_each_philosopher_must_eat;
	pthread_t	*philosophers;
}	t_philo;

int		ft_atoi(const char *str);
int		checker(char **av);
int		num_checker(char *str);
size_t	ft_strlen(const char *str);
void	philo_init(char **av, t_philo *philo);
void	philo_init_2(char **av, t_philo *philo);
int		philo_checker(t_philo *philo);
int		philo_checker_2(t_philo *philo);
void	main_function( t_philo *philo);
void	*philo_routine(void *arg);

#endif