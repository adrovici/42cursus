/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   the_chosen_one_utils.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 19:24:04 by umartin-          #+#    #+#             */
/*   Updated: 2022/04/08 14:57:01 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	list_stack_init(t_list **sta, t_push *push, int aux)
{
	int	i;

	i = aux;
	aux = aux + 1;
	push->stack1 = cla_finder(sta, aux);
	aux = aux + i;
	push->stack2 = cla_finder(sta, aux);
	aux = aux + i + 1;
	push->stack3 = cla_finder(sta, aux);
	aux = aux + i;
	push->stack4 = cla_finder(sta, aux);
	aux = aux + i + 1;
	push->stack5 = cla_finder(sta, aux);
	aux = aux + i;
	push->stack6 = cla_finder(sta, aux);
	aux = aux + i + 1;
	push->stack7 = cla_finder(sta, aux);
	aux = aux + i;
	push->min = min_num_finder(sta);
	push->max = max_num_finder(sta);
}

void	the_game_changer(t_push *push)
{
	push->stack1 = push->stack9;
	push->stack2 = push->stack10;
	push->stack3 = push->stack11;
	push->stack4 = push->stack12;
	push->stack5 = push->stack13;
	push->stack6 = push->stack14;
	push->stack7 = push->stack15;
}

void	a_to_b_ord(t_list **sta, t_list **stb, t_list **result, int a)
{
	t_list	*temp;
	t_list	*temp2;

	temp = *sta;
	while (a-- != 0)
	{
		temp = *sta;
		temp2 = *sta;
		while (temp2->next != NULL)
			temp2 = temp2->next;
		temp = *sta;
		if (temp->content == (temp2->content + 1))
			psw_ra(sta, result);
		else
			psw_pb(sta, stb, result);
		temp = temp->next;
		temp = *sta;
	}
}

void	a_to_b_spl_8(t_list **sta, t_list **stb, t_list **result, t_push *push)
{
	t_list	*temp;
	int		i;
	int		c;

	temp = *sta;
	i = ft_lstsize(temp);
	c = 0;
	while (i-- != 0)
	{
		temp = *sta;
		if ((temp->content >= push->min) && (temp->content <= push->stack4))
			psw_pb(sta, stb, result);
		else
		{
			psw_ra(sta, result);
			c++;
		}
	}
}

int	a_b_spl_4(t_list **sta, t_list **stb, t_list **result, t_push *push)
{
	t_list	*temp;
	int		i;
	int		c;

	i = push->a;
	c = 0;
	temp = *sta;
	while (i-- != 0)
	{
		temp = *sta;
		if ((temp->content > push->stack4) && (temp->content < push->stack6))
			psw_pb(sta, stb, result);
		else
		{
			psw_ra(sta, result);
			c++;
		}
	}
	return (c);
}
