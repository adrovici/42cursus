/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_add.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 15:31:35 by umartin-          #+#    #+#             */
/*   Updated: 2022/03/07 19:41:34 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	addnumbers(t_list **sta, char **av, int i)
{
	int	number;

	while (av[++i] != NULL)
	{
		number = ft_atoi_psw(av[i]);
		ft_lstadd_back(sta, ft_lstnew(number));
	}
}

int	ft_atoi_psw(const char *str)
{
	int			c;
	int			s;
	long int	res;

	c = 0;
	s = 1;
	res = 0;
	while ((str[c] >= '\t' && str[c] <= '\r') || str[c] == ' ')
		c++;
	if (str[c] == '+' || str[c] == '-')
	{
		if (str[c] == '-')
			s *= -1;
		c++;
	}
	while (str[c] >= '0' && str[c] <= '9')
	{
		res = (str[c] - '0') + (res * 10);
		if (res * s < -2147483648)
			errormsg();
		if (res * s > 2147483647)
			errormsg();
		c++;
	}
	return (res * s);
}
