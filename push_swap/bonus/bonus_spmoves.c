/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_spmoves.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 14:18:45 by umartin-          #+#    #+#             */
/*   Updated: 2022/04/11 14:26:14 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

void	chk_pb(t_list **sta, t_list **stb)
{
	t_list	*temp1;

	if (*sta == NULL)
		return ;
	temp1 = *sta;
	if (temp1->next != NULL)
		*sta = temp1->next;
	else
		*sta = NULL;
	ft_lstadd_front(stb, temp1);
}

void	chk_pa(t_list **sta, t_list **stb)
{
	t_list	*temp1;

	if (*stb == NULL)
		return ;
	temp1 = *stb;
	if (temp1->next != NULL)
		*stb = temp1->next;
	else
		*stb = NULL;
	ft_lstadd_front(sta, temp1);
}

void	chk_sa(t_list **sta)
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
}

void	chk_sb(t_list **stb)
{
	t_list	*temp1;
	t_list	*temp2;

	if (*stb == NULL)
		return ;
	temp1 = *stb;
	if (temp1->next == NULL)
		return ;
	temp2 = temp1->next;
	temp1->next = temp2->next;
	temp2->next = temp1;
	*stb = temp2;
}
