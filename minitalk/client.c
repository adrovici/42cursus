/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 16:34:29 by umartin-          #+#    #+#             */
/*   Updated: 2022/05/12 13:43:20 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"
#include "libft/libft.h"

static void	confirmer(int signal)
{
	if (signal == SIGUSR2)
		ft_putstr_fd("\033[0;32mSignal Recived\033[0;32m\n", 1);
	else
		ft_putstr_fd("\033[0;32mError\033[0;32m\n", 1);
}

int	ft_send(int pid, char sig)
{
	int	bit;

	bit = 0;
	while (bit < 8)
	{
		if ((sig & (1 << bit)) != 0)
			kill (pid, SIGUSR1);
		else
			kill (pid, SIGUSR2);
		usleep (1000);
		bit++;
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int		pid;
	size_t	c;

	c = 0;
	if (argc == 3)
	{
		pid = ft_atoi(argv[1]);
		if (pid == -1)
			return (0);
		while (argv[2][c])
		{
			signal(SIGUSR1, confirmer);
			signal(SIGUSR2, confirmer);
			ft_send(pid, argv[2][c]);
			c++;
		}
		ft_send(pid, '\n');
	}
	else
	{
		ft_printf ("Formato Incorrecto: [./client <PID> <STR>]\n");
		exit (1);
	}
	return (0);
}
