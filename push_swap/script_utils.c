/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   script_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 11:07:17 by umartin-          #+#    #+#             */
/*   Updated: 2022/04/08 12:46:58 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	script1(t_list **sta, t_list **stb, t_list **result, t_push *push)
{
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
	push->a = until_next_four_stacks(sta, push);
	push->c = a_b_spl_4(sta, stb, result, push);
	rrr_adv(sta, stb, result, push);
	stk2_split_2(sta, stb, result, push);
	b_to_a_orden(sta, stb, result, push);
	push->a = until_next_stack(sta, push);
	a_to_b_ord(sta, stb, result, push->a);
	b_to_a_orden(sta, stb, result, push);
	push->a = until_next_two_stacks_68(sta, push);
	push->c = a_to_b_spl(sta, stb, result, push);
	rrr_adv(sta, stb, result, push);
	b_to_a_orden(sta, stb, result, push);
	push->a = until_next_stack(sta, push);
	a_to_b_ord(sta, stb, result, push->a);
	b_to_a_orden(sta, stb, result, push);
}

void	script2(t_list **sta, t_list **stb, t_list **result, t_push *push)
{
	push->c = a_b_spl_4(sta, stb, result, push);
	rrr_adv(sta, stb, result, push);
	stk2_split_2(sta, stb, result, push);
	b_to_a_orden(sta, stb, result, push);
	push->a = until_next_stack(sta, push);
	a_to_b_ord(sta, stb, result, push->a);
	b_to_a_orden(sta, stb, result, push);
	push->a = u_n_two_stck_500(sta, push);
	push->c = a_to_b_spl(sta, stb, result, push);
	rrr_adv(sta, stb, result, push);
	b_to_a_orden(sta, stb, result, push);
	push->a = u_n_stck_500(sta, push);
	a_to_b_ord(sta, stb, result, push->a);
	b_to_a_orden(sta, stb, result, push);
	push->c = a_to_b_sp_82(sta, stb, result, push);
	rrr_adv(sta, stb, result, push);
	the_game_changer(push);
	stack4_split(sta, stb, result, push);
	stack2_split(sta, stb, result, push);
	b_to_a_orden(sta, stb, result, push);
}
