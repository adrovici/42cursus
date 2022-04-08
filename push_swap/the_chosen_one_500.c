/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_c_o_500.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 14:24:18 by umartin-          #+#    #+#             */
/*   Updated: 2022/04/07 12:17:20 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	t_c_o_500(t_list **sta, t_list **stb, t_list **result, t_push *push)
{
	t_list	*temp;
	int		aux;

	temp = *sta;
	aux = (ft_lstsize(temp) / 16);
	list_16stack_init(sta, push, aux);
	a_b_spl_16 (sta, stb, result, push);
	stack8_split(sta, stb, result, push);
	stack4_split(sta, stb, result, push);
	stack2_split(sta, stb, result, push);
	b_to_a_orden(sta, stb, result, push);
	push->a = until_next_stack_2(sta, push);
	a_to_b_ord(sta, stb, result, push->a);
	b_to_a_orden(sta, stb, result, push);
	push->a = until_next_two_stacks_24(sta, push);
	push->c = a_to_b_spl(sta, stb, result, push);
	rrr_adv(sta, stb, result, push);
	b_to_a_orden(sta, stb, result, push);
	push->a = until_next_stack_2(sta, push);
	a_to_b_ord(sta, stb, result, push->a);
	b_to_a_orden(sta, stb, result, push);
	push->a = u_n_four_stck_500(sta, push);
	script2(sta, stb, result, push);
	script1(sta, stb, result, push);
}

int	u_n_stck_500(t_list **sta, t_push *push)
{
	t_list	*temp;
	int		i;
	int		c;

	i = 0;
	c = 0;
	temp = *sta;
	while (temp->content > push->stack7 && temp->content <= push->stack8)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}

void	list_16stack_init(t_list **sta, t_push *push, int aux)
{
	int	i;

	i = aux;
	push->stack1 = cla_finder(sta, aux);
	aux = aux + i;
	push->stack2 = cla_finder(sta, aux);
	aux = aux + i;
	push->stack3 = cla_finder(sta, aux);
	aux = aux + i;
	push->stack4 = cla_finder(sta, aux);
	aux = aux + i;
	push->stack5 = cla_finder(sta, aux);
	aux = aux + i;
	push->stack6 = cla_finder(sta, aux);
	aux = aux + i;
	push->stack7 = cla_finder(sta, aux);
	aux = aux + i;
	push->min = min_num_finder(sta);
	push->max = max_num_finder(sta);
	list_init_utils(sta, push, aux, i);
}

void	list_init_utils(t_list **sta, t_push *push, int aux, int i)
{
	push->stack8 = cla_finder(sta, aux);
	aux = aux + i;
	push->stack9 = cla_finder(sta, aux);
	aux = aux + i;
	push->stack10 = cla_finder(sta, aux);
	aux = aux + i;
	push->stack11 = cla_finder(sta, aux);
	aux = aux + i;
	push->stack12 = cla_finder(sta, aux);
	aux = aux + i;
	push->stack13 = cla_finder(sta, aux);
	aux = aux + i;
	push->stack14 = cla_finder(sta, aux);
	aux = aux + i;
	push->stack15 = cla_finder(sta, aux);
	aux = aux + i;
}

int	u_n_four_stck_500(t_list **sta, t_push *push)
{
	t_list	*temp;
	int		i;
	int		c;
	int		f;

	i = 0;
	c = 0;
	temp = *sta;
	while (temp->content <= push->stack8)
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
