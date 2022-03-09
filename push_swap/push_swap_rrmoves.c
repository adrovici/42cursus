/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_rrmoves.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 16:46:27 by umartin-          #+#    #+#             */
/*   Updated: 2022/03/09 16:52:00 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	psw_rra(t_list **sta)
{
	t_list	*temp1;
	t_list	*temp2;

	if (*sta == NULL)
		return ;
	temp1 = *sta;
	temp2 = *sta;
	while (temp1->next != NULL)
		temp1 = temp1->next;
	while (temp2->next != temp1)
		temp2 = temp2->next;
	temp2->next = NULL;
	ft_lstadd_front(sta, temp1);
	ft_printf("rra\n");
}

void	psw_rrb(t_list **stb)
{
	t_list	*temp1;
	t_list	*temp2;

	if (*stb == NULL)
		return ;
	temp1 = *stb;
	temp2 = *stb;
	while (temp1->next != NULL)
		temp1 = temp1->next;
	while (temp2->next != temp1)
		temp2 = temp2->next;
	temp2->next = NULL;
	ft_lstadd_front(stb, temp1);
	ft_printf("rrb\n");
}

void	psw_rrr(t_list **sta, t_list **stb)
{
	psw_rra(&sta);
	psw_rrb(&stb);
	ft_printf("rrr\n");
}
