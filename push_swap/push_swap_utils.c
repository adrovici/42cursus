/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 14:49:47 by umartin-          #+#    #+#             */
/*   Updated: 2022/04/08 14:49:55 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	min_num_finder(t_list	**sta)
{
	t_list	*temp;
	int		min;

	temp = *sta;
	min = (int)temp->content;
	temp = temp->next;
	while (temp != NULL)
	{
		if ((int)temp->content < min)
			min = (int)temp->content;
		temp = temp->next;
	}
	return (min);
}

int	max_num_finder(t_list	**sta)
{
	t_list	*temp;
	int		max;

	temp = *sta;
	max = (int)temp->content;
	temp = temp->next;
	while (temp != NULL)
	{
		if ((int)temp->content > max)
			max = (int)temp->content;
		temp = temp->next;
	}
	return (max);
}

int	next_min_num(t_list	**sta, int min)
{
	t_list	*temp;
	int		n;

	temp = *sta;
	n = max_num_finder(sta);
	while (temp != NULL)
	{
		if ((int)temp->content < n && (int)temp->content > min)
			n = (int)temp->content;
		temp = temp->next;
	}
	return (n);
}
