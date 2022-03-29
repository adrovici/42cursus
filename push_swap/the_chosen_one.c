/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   the_chosen_one.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 12:51:41 by umartin-          #+#    #+#             */
/*   Updated: 2022/03/29 16:32:56 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	the_chosen_one(t_list **sta, t_list **stb, t_list **result)
{
	t_list	*temp;
	t_list	*tempb;
	int		cla;
	int		mid;
	int		cont;
	int		aux;

	temp = *sta;
	cont = 0;
	mid = (ft_lstsize(temp) / 2);
	printf ("size = %i\n", ft_lstsize(temp));
	cla = cla_mid_finder(sta, ft_lstsize(temp));
	printf ("cla = %i\n", cla);
	while (ft_lstsize(temp) > mid)
	{
		temp = *sta;
		// printf ("size = %i\n", ft_lstsize(temp));
		// printf ("mid = %i\n", mid);
		// printf ("cla = %i\n", cla);
		// printf ("current = %i\n", temp->content);
		if ((int)temp->content <= cla)
			psw_pb(sta, stb, result);
		else
			psw_ra(sta, result);
		temp = *sta;
	}
	tempb = *stb;
	imprimir (sta, stb);
	while (ft_lstsize(tempb) > 12)
	{
		b_to_a_splitter(sta, stb, result);
		tempb = *stb;
		cont++;
	}
	b_to_a_orden(sta, stb, result);
	aux = 12;
	while (aux-- != 0)
		psw_ra(sta, result);
}

void	b_to_a_orden(t_list **sta, t_list **stb, t_list **result)
{
	t_list	*temp;
	int		current;

	temp = *stb;
	while (ft_lstsize(temp) != 0)
	{
		current = max_num_finder(stb);
		while ((int)temp->content != current)
		{
			if (r_or_rr(stb, current))
				psw_rrb(stb, result);
			else
				psw_rb(stb, result);
			temp = *stb;
		}
		psw_pa(sta, stb, result);
		temp = *stb;
	}
}

void	b_to_a_splitter(t_list **sta, t_list **stb, t_list **result)
{
	t_list	*tempb;
	int		cla;
	int		mid;

	tempb = *stb;
	mid = (ft_lstsize(tempb) / 2);
	printf ("size = %i\n", ft_lstsize(tempb));
	cla = cla_mid_finder(stb, ft_lstsize(tempb));
	printf ("cla b = %i\n", cla);
	while (ft_lstsize(tempb) > mid)
	{
		tempb = *stb;
		// printf ("size b = %i\n", ft_lstsize(tempb));
		// printf ("mid b = %i\n", mid);
		// printf ("cla = %i\n", cla);
		// printf ("current = %i\n", tempb->content);
		// printf ("\n");
		if ((int)tempb->content >= cla)
			psw_pa(sta, stb, result);
		else
			psw_rb(stb, result);
		tempb = *stb;
	}
}

int	cla_mid_finder(t_list	**sta, int a)
{
	t_list	*temp;
	int		i;
	int		min;
	int		cla;

	i = 0;
	min = min_num_finder(sta);
	cla = next_min_num(sta, min);
	while (i < ((a / 2) - 2))
	{
		cla = next_min_num(sta, cla);
		i++;
	}
	return (cla);
}
