/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_smoves.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 18:46:03 by umartin-          #+#    #+#             */
/*   Updated: 2022/03/08 15:21:31 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	psw_sa(t_list **sta)
{
	t_list	*temp1;
	t_list	*temp2;

	if (*sta == NULL)
		return ;
	temp1 = *sta;
	if (temp1->next == NULL)
		return ;
	temp2 = temp1->next;
	temp1->next = temp2->next;
	temp2->next = temp1;
	*sta = temp2;
	ft_printf("sa\n");
}

void	psw_sb(t_list **stb)
{
	t_list	*temp1;
	t_list	*temp2;

	if (*stb == NULL)
		return ;
	temp1 = *stb;
	temp2 = temp1->next;
	temp1->next = temp2->next;
	temp2->next = temp1;
	*stb = temp2;
	ft_printf("sb\n");
}

void	psw_ss(t_list **sta, t_list **stb)
{
	psw_sa(&sta);
	psw_sb(&stb);
	ft_printf("ss\n");
}
