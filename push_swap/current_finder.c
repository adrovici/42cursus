/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   current_finder.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 19:15:44 by umartin-          #+#    #+#             */
/*   Updated: 2022/03/16 15:40:51 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	current_finder(t_list **sta, int cla)
{
	t_list	*temp;
	int		counter;
	int		mid_num;
	int		current;

	counter = 0;
	if (*sta == NULL)
		exit(0);
	temp = *sta;
	mid_num = ft_lstsize(temp) / 2;
	while (temp != NULL)
	{
		if ((int)temp->content <= cla)
			break ;
		counter++;
		temp = temp->next;
	}
	current = current_finder_3(sta, current, cla);
	current = current_finder_2(sta, current, counter);
	return (current);
}

int	current_finder_3(t_list **sta, int current, int cla)
{
	t_list	*temp;

	temp = *sta;
	while (temp != NULL)
	{
		if ((int)temp->content <= cla)
			current = (int)temp->content;
		temp = temp->next;
	}
	return (current);
}

int	current_finder_2(t_list **sta, int current, int counter)
{
	t_list	*temp;
	int		counter2;

	counter2 = 0;
	temp = *sta;
	while (temp != NULL)
	{
		if ((int)temp->content == current)
			break ;
		counter2++;
		temp = temp->next;
	}
	temp = *sta;
	counter2 = ft_lstsize(temp) - counter2;
	if (counter > counter2)
		counter = current_finder_2_2(sta, current, counter2);
	else
		counter = current_finder_2_2(sta, current, counter);
	return (current);
}

int	current_finder_2_2(t_list **sta, int current, int counter)
{
	t_list	*temp;

	temp = *sta;
	counter++;
	while (counter-- > 0)
	{
		current = (int)temp->content;
		temp = temp->next;
	}
	return (current);
}

int	current_finder_2_3(t_list **sta, int current, int counter2)
{
	t_list	*temp;

	temp = *sta;
	counter2 = ft_lstsize(temp) - counter2 + 1;
	while (counter2-- > 0)
	{
		current = (int)temp->content;
		temp = temp->next;
	}
}
