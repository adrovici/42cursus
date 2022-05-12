/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 14:13:04 by umartin-          #+#    #+#             */
/*   Updated: 2022/05/05 14:25:12 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	sighandler(int signal, siginfo_t *a, void *b)
{
	static char	bi;
	static int	j;

	(void) b;
	if (!j)
	{
		j = 0;
		bi = 0;
	}
	if (signal == 30)
		bi += (0x01 << j);
	if (j == 7)
	{
		if (bi == 0)
		{
			usleep(1000);
			write(1, "\n", 1);
			kill(a->si_pid, SIGUSR1);
		}
		else
			write(1, &bi, 1);
		j = -1;
		bi = 0;
	}
	j++;
}

int	main(void)
{
	struct sigaction	sa;

	sa.sa_sigaction = sighandler;
	printf("%d\n", getpid());
	while (1)
	{
		sigaction(SIGUSR2, &sa, NULL);
		sigaction(SIGUSR1, &sa, NULL);
		pause ();
	}
	return (0);
}
