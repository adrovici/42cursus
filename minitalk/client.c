/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 16:34:29 by umartin-          #+#    #+#             */
/*   Updated: 2022/05/05 14:13:33 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"
#include "libft/libft.h"

void	sighandler(int signal, siginfo_t *a, void *b)
{
	(void) a;
	(void) b;
	(void) signal;
	write(1, "message delivered\n", 17);
	exit (0);
}

void	ft_send(int pid, char c)
{
	int		i;

	i = 0;
	while (i <= 7)
	{
		if ((c & (0x01 << i)) != 0)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		i++;
		usleep(1000);
	}
}

int	main(int argc, char *argv[])
{
	int					i;
	struct sigaction	sa;

	sa.sa_sigaction = sighandler;
	i = 0;
	if (argc == 3)
	{
		while (argv[2][i])
		{
			ft_send(ft_atoi(argv[1]), argv[2][i]);
			i++;
		}
		ft_send(ft_atoi(argv[1]), 0);
		while (1)
		{	
			sigaction(SIGUSR1, &sa, NULL);
			pause();
		}
	}
	return (0);
}
