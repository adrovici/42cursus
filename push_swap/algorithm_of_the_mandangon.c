/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_of_the_mandangon.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 18:21:56 by umartin-          #+#    #+#             */
/*   Updated: 2022/04/08 14:48:33 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	r_or_rr(t_list **sta, int current)
{
	t_list	*temp;
	int		i;

	temp = *sta;
	i = 1;
	while (temp)
	{
		if (temp->content == current)
			break ;
		temp = temp->next;
		i++;
	}
	temp = *sta;
	if (i > ft_lstsize(temp) / 2)
		return (1);
	else
		return (0);
}

int	r_or_rr_b(t_list **stb, int current)
{
	t_list	*tempb;
	int		i;

	tempb = *stb;
	i = 0;
	while (tempb)
	{
		if (tempb->content == current)
			break ;
		tempb = tempb->next;
		i++;
	}
	tempb = *stb;
	if (i > ft_lstsize(tempb) / 2)
		return (1);
	else
		return (0);
}

int	current_checker(t_list **sta, int cla)
{
	t_list	*temp;

	temp = *sta;
	while (temp)
	{
		if (temp->content < cla)
			return (0);
	}
	return (1);
}

int	cla_finder(t_list	**sta, int a)
{
	int		i;
	int		min;
	int		cla;

	i = 0;
	min = min_num_finder(sta);
	cla = next_min_num(sta, min);
	while (i++ < a - 2)
		cla = next_min_num(sta, cla);
	return (cla);
}
