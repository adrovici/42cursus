/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   the_chosen_one_utils_2.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 13:58:20 by umartin-          #+#    #+#             */
/*   Updated: 2022/04/08 14:58:57 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	until_next_four_stacks(t_list **sta, t_push *push)
{
	t_list	*temp;
	int		i;
	int		c;
	int		f;

	i = 0;
	c = 0;
	temp = *sta;
	while (temp->content != push->min)
	{
		temp = temp->next;
		i++;
	}
	temp = *sta;
	while (c++ <= i)
	{
		if (temp->content <= push->stack6)
			f = c;
		temp = temp->next;
	}
	return (f);
}

int	until_next_two_stacks_68(t_list **sta, t_push *push)
{
	t_list	*temp;
	int		i;
	int		c;
	int		f;

	i = 0;
	c = 0;
	temp = *sta;
	while (temp->content != push->min)
	{
		temp = temp->next;
		i++;
	}
	temp = *sta;
	while (c++ <= i)
	{
		if (temp->content <= push->stack7)
			f = c;
		temp = temp->next;
	}
	return (f);
}

int	until_next_two_stacks_24(t_list **sta, t_push *push)
{
	t_list	*temp;
	int		i;
	int		c;
	int		f;

	i = 0;
	c = 0;
	temp = *sta;
	while (temp->content <= push->stack4)
	{
		temp = temp->next;
		i++;
	}
	temp = *sta;
	while (c++ <= i)
	{
		if (temp->content <= push->stack3)
			f = c;
		temp = temp->next;
	}
	return (f);
}

int	until_next_stack(t_list **sta, t_push *push)
{
	t_list	*temp;
	int		i;

	i = 0;
	temp = *sta;
	if (temp->content > push->stack5 && temp->content <= push->stack6)
	{
		while (temp->content > push->stack5 && temp->content <= push->stack6)
		{
			temp = temp->next;
			i++;
		}
	}
	else if (temp->content > push->stack7 && temp->content <= push->max)
	{
		while (temp->content > push->stack7 && temp->content <= push->max)
		{
			temp = temp->next;
			i++;
		}
	}
	return (i);
}

int	until_next_stack_2(t_list **sta, t_push *push)
{
	t_list	*temp;
	int		i;

	i = 0;
	temp = *sta;
	if ((temp->content > push->stack1) && (temp->content <= push->stack2))
	{
		while (temp->content > push->stack1 && temp->content <= push->stack2)
		{
			temp = temp->next;
			i++;
		}
	}
	else if ((temp->content > push->stack3) && (temp->content <= push->stack4))
	{
		while (temp->content > push->stack3 && temp->content <= push->stack4)
		{
			temp = temp->next;
			i++;
		}
	}
	return (i);
}
