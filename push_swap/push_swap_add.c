/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_add.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 15:31:35 by umartin-          #+#    #+#             */
/*   Updated: 2022/04/04 19:27:20 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	addnumbers(t_list **stemp, char **av, int i)
{
	int	number;

	while (av[++i] != NULL)
	{
		number = ft_atoi_psw(av[i]);
		ft_lstadd_back(stemp, ft_lstnew(number));
	}
}

void	list_init(t_list **stemp, t_list **sta)
{
	t_list	*temp;
	int		a;
	int		min;
	int		min_aux;
	int		min_min;

	temp = *stemp;
	a = 2;
	min_min = 1;
	min = min_num_finder(stemp);
	min_aux = next_min_num(stemp, min);
	while (temp != NULL)
	{
		if ((int)temp->content == min)
			ft_lstadd_back(sta, ft_lstnew(min_min));
		else
		{
			while ((int)temp->content != min_aux)
			{
				min_aux = next_min_num(stemp, min_aux);
				a++;
			}
			ft_lstadd_back(sta, ft_lstnew(a));
			a = 2;
		}
		temp = temp->next;
		min_aux = next_min_num(stemp, min);
		a = 2;
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

void	errormsg(void)
{
	ft_printf("Error\n");
	exit (0);
}
