/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   current_finder.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 19:15:44 by umartin-          #+#    #+#             */
/*   Updated: 2022/03/18 16:53:55 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	current_finder(t_list **sta, int cla)
{
	t_list	*temp;
	int		current;
	int		c;
	int		c2;

	c = 1;
	c2 = 1;
	temp = *sta;
	while (temp)
	{
		if ((int)temp->content < cla)
			break ;
		c++;
		temp = temp->next;
	}
	temp = *sta;
	while (temp)
	{
		if ((int)temp->content < cla)
			current = (int)temp->content;
		temp = temp->next;
	}
	temp = *sta;
	while (temp)
	{
		if ((int)temp->content == current)
			break ;
		c2++;
		temp = temp->next;
	}
	temp = *sta;
	c2 = ft_lstsize(temp) - c2 + 1;
	if (c < c2)
	{
		while (c > 0)
		{
			current = (int)temp->content;
			temp = temp->next;
			c--;
		}
	}
	else
	{
		temp = *sta;
		c2 = ft_lstsize(temp) - c2 + 1;
		while (c2 > 0)
		{
			current = (int)temp->content;
			temp = temp->next;
			c2--;
		}
	}
	return (current);
}
