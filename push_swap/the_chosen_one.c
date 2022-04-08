/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   the_chosen_one.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 12:51:41 by umartin-          #+#    #+#             */
/*   Updated: 2022/04/08 15:01:40 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	t_c_o(t_list **sta, t_list **stb, t_list **result, t_push *push)
{
	t_list	*temp;
	int		aux;

	temp = *sta;
	aux = (ft_lstsize(temp) / 8);
	list_stack_init(sta, push, aux);
	a_to_b_spl_8 (sta, stb, result, push);
	stack4_split(sta, stb, result, push);
	stack2_split(sta, stb, result, push);
	b_to_a_orden(sta, stb, result, push);
	script1(sta, stb, result, push);
}

void	rrr_adv(t_list **sta, t_list **stb, t_list **result, t_push *push)
{
	t_list	*temp;
	int		i;
	int		mov;

	temp = *stb;
	i = 1;
	push->rrr_size = ft_lstsize(temp);
	push->rrr_min = min_num_finder(stb);
	while ((i++) && (int)temp->content != push->rrr_min)
		temp = temp->next;
	mov = push->rrr_size - i + 1;
	if (mov > push->c)
		while (push->c-- != 0)
			psw_rra(sta, result);
	else if (mov == push->c)
		while (push->c-- != 0)
			psw_rrr(sta, stb, result);
	else if (mov < push->c)
	{
		push->c = push->c - mov;
		while (mov-- != 0)
			psw_rrr(sta, stb, result);
		while (push->c-- != 0)
			psw_rra(sta, result);
	}
}

int	a_to_b_spl(t_list **sta, t_list **stb, t_list **result, t_push *push)
{
	t_list	*temp;
	int		i;
	int		c;

	i = push->a;
	c = 0;
	temp = *sta;
	if ((temp->content > push->stack2) && (temp->content <= push->stack4))
		c = a_b_spl_t(sta, stb, result, push);
	else if ((temp->content > push->stack4) && (temp->content <= push->max))
	{
		while (i-- != 0)
		{
			temp = *sta;
			if (temp->content >= push->stack6 && temp->content <= push->stack7)
				psw_pb(sta, stb, result);
			else
			{
				psw_ra(sta, result);
				c++;
			}
		}
	}
	return (c);
}

int	a_b_spl_t(t_list **sta, t_list **stb, t_list **result, t_push *push)
{
	t_list	*temp;
	int		i;
	int		c;

	i = push->a;
	c = 0;
	while (i-- != 0)
	{
		temp = *sta;
		if (temp->content > push->stack2 && temp->content <= push->stack3)
			psw_pb(sta, stb, result);
		else
		{
			psw_ra(sta, result);
			c++;
		}
	}
	return (c);
}

void	b_to_a_orden(t_list **sta, t_list **stb, t_list **result, t_push *push)
{
	t_list	*temp;

	temp = *stb;
	push->ord_aux = (ft_lstsize(temp));
	while (ft_lstsize(temp) != 0)
	{
		push->ord_cu = max_num_finder(stb);
		while ((int)temp->content != push->ord_cu)
		{
			temp = *stb;
			if ((int)temp->content == min_num_finder(stb))
				push->ord_aux = b_to_a_ord_ut(sta, stb, result, push->ord_aux);
			temp = *stb;
			if (ft_lstsize(temp) == 1)
			{
				push->ord_aux = b_to_a_ord_ut(sta, stb, result, push->ord_aux);
				break ;
			}
			b_to_a_ord_2(stb, result, push);
			temp = *stb;
		}
		psw_pa(sta, stb, result);
		temp = *stb;
	}
	ra_printer(sta, result, push->ord_aux);
}
