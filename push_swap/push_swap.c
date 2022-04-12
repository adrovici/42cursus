/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:36:59 by umartin-          #+#    #+#             */
/*   Updated: 2022/04/12 17:07:16 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_push	push;
	t_list	*sta;
	t_list	*stb;
	t_list	*result;
	t_list	*stemp;

	sta = NULL;
	stb = NULL;
	stemp = NULL;
	result = NULL;
	if (ac < 2)
		return (0);
	if (checker(ac, av))
		errormsg();
	else
	{
		if (ac > 2)
			addnumbers(&stemp, av, 0, 0);
		else
			addnumbers(&stemp, ft_split(av[1], ' '), -1, 1);
	}
	list_init(&stemp, &sta);
	main_utils(&sta, &stb, &result, &push);
	free_lists(sta, result, stemp);
	exit (0);
}

void	main_utils(t_list **sta, t_list **stb, t_list **result, t_push *push)
{
	if (alr_ord(sta))
		exit (0);
	if (rep_nums(sta))
		errormsg();
	arg_num_chkr(sta, stb, result, push);
	no_op_printer(result);
}

int	checker(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 2)
	{
		if (at_least_one_num(av[1]) == 1)
		{
			if (com_num_checker(av[1]))
				return (1);
			else
				return (0);
		}
		else
			exit (0);
	}
	else
	{
		while (av[++i] != NULL)
		{
			if (num_checker(av[i]))
				return (1);
		}
	}
	return (0);
}

int	at_least_one_num(char *str)
{
	int	i;
	int	c;

	i = -1;
	c = 0;
	if ((!str) || str[0] == '\0')
		exit(0);
	while (str[++i] != '\0')
	{
		if ((str[i] >= 48) && (str[i] <= 57))
			c++;
	}
	if (c == 0)
		return (0);
	else if (c > 0)
		return (1);
	return (0);
}

int	com_num_checker(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != '\0')
	{
		if (((str[i] != '-') && (str[i] != '+') && (str[i] != ' '))
			&& ((str[i] < '0') || (str[i] > '9')))
			return (1);
		if ((str[i] == '-') || (str[i] == '+'))
		{
			if (i == 0)
			{
				if ((str[i + 1] < '0') || (str[i + 1] > '9'))
					return (1);
			}
			else
			{
				if (((str[i + 1] < '0') || (str[i + 1] > '9'))
					|| (str[i - 1] != ' '))
					return (1);
			}
		}
	}
	return (0);
}
