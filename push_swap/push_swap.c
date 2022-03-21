/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:36:59 by umartin-          #+#    #+#             */
/*   Updated: 2022/03/21 19:45:19 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list	*sta;
	t_list	*stb;
	t_list	*result;
	int		i;

	sta = NULL;
	stb = NULL;
	result = NULL;
	if (ac < 2)
		return (0);
	if (checker(ac, av))
	{
		ft_printf("Error\n");
		return (0);
	}
	else
	{
		if (ac > 2)
			addnumbers(&sta, av, 0);
		else
			addnumbers(&sta, ft_split(av[1], ' '), -1);
	}
	if (alr_ord(&sta))
		exit (0);
	if (rep_nums(&sta))
		errormsg();
	arg_num_chkr(&sta, &stb, &result);
	result_printer(&result);
	//imprimir (&sta, &stb);
	return (0);
}

void	imprimir(char **sta, char **stb)
{
	t_list	*tempa;
	t_list	*tempb;

	tempa = *sta;
	tempb = *stb;
	printf("\n");
	printf ("/////////////////////////////\n");
	printf ("STACK A\n");
	while (tempa)
	{
		printf("%i\n", (int)tempa->content);
		tempa = tempa->next;
	}
	printf("\n");
	printf ("STACK B\n");
	while (tempb)
	{
		printf("%i\n", (int)tempb->content);
		tempb = tempb->next;
	}
	printf ("/////////////////////////////\n");
	printf("\n");
}

int	checker(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 2)
	{
		if (com_num_checker(av[1]))
			return (1);
		else
			return (0);
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

int	num_checker(char *str)
{
	int	i;

	if (str[0] == '-' || str[0] == '+')
	{
		if (ft_strlen(str) == 1)
			return (1);
		i = 1;
		while (str[i] != '\0')
		{
			if (str[i] < '0' || str[i] > '9')
				return (1);
			i++;
		}
		return (0);
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (1);
		i++;
	}
	return (0);
}
