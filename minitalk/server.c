/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 14:13:04 by umartin-          #+#    #+#             */
/*   Updated: 2022/05/12 12:57:22 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	sighandler(int sig, siginfo_t *info, void *s)
{
	static int	i;
	static int	bit;

	(void)info;
	(void)s;
	if (sig == SIGUSR1)
		i |= (1 << bit);
	bit++;
	if (bit == 8)
	{
		ft_putchar_fd(i, 1);
		if (!i)
			write(1, "\n", 1);
		bit = 0;
		i = 0;
	}
	kill(info->si_pid, SIGUSR2);
}

int	main(int argc, char **argv)
{
	pid_t				pid;
	struct sigaction	act;

	(void)argv;
	if (argc != 1)
	{
		write(1, "\x1B[31mError Format...\x1B[31m", 27);
		return (0);
	}
	pid = getpid();
	ft_printf("PID = %i", pid);
	write(1, "\n", 1);
	act.sa_sigaction = sighandler;
	sigemptyset(&act.sa_mask);
	act.sa_flags = 0;
	while (1)
	{
		sigaction(SIGUSR1, &act, NULL);
		sigaction(SIGUSR2, &act, NULL);
		pause();
	}
	return (0);
}
