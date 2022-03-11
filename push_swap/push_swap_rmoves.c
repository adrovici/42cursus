/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_rmoves.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 15:07:47 by umartin-          #+#    #+#             */
/*   Updated: 2022/03/11 14:04:21 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	psw_ra(t_list **sta)
{
	t_list	*temp1;

	if (*sta == NULL)
		return ;
	temp1 = *sta;
	if (temp1->next != NULL)
		*sta = temp1->next;
	else
		*sta = NULL;
	ft_lstadd_back(sta, temp1);
	temp1->next = NULL;
	ft_printf("ra\n");
}

void	psw_rb(t_list **stb)
{
	t_list	*temp1;

	if (*stb == NULL)
		return ;
	temp1 = *stb;
	if (temp1->next != NULL)
		*stb = temp1->next;
	else
		*stb = NULL;
	ft_lstadd_back(stb, temp1);
	temp1->next = NULL;
	ft_printf("rb\n");
}

void	psw_rr(t_list **sta, t_list **stb)
{
	psw_ra(&sta);
	psw_rb(&stb);
	ft_printf("rr\n");
}

void	doble_pa(t_list **sta, t_list **stb)
{
	psw_pa(sta, stb);
	psw_pa(sta, stb);
}
