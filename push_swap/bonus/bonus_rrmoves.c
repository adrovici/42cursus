/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_rrmoves.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 14:31:22 by umartin-          #+#    #+#             */
/*   Updated: 2022/04/11 15:04:54 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

void	chk_rra(t_list **sta)
{
	t_list	*temp1;
	t_list	*temp2;

	if (*sta == NULL)
		return ;
	temp1 = *sta;
	if (temp1->next == NULL)
		return ;
	temp2 = *sta;
	while (temp1->next != NULL)
		temp1 = temp1->next;
	while (temp2->next != temp1)
		temp2 = temp2->next;
	temp2->next = NULL;
	ft_lstadd_front(sta, temp1);
}

void	chk_rrb(t_list **stb)
{
	t_list	*temp1;
	t_list	*temp2;

	if (*stb == NULL)
		return ;
	temp1 = *stb;
	if (temp1->next == NULL)
		return ;
	temp2 = *stb;
	while (temp1->next != NULL)
		temp1 = temp1->next;
	while (temp2->next != temp1)
		temp2 = temp2->next;
	temp2->next = NULL;
	ft_lstadd_front(stb, temp1);
}

void	chk_rrr(t_list **sta, t_list **stb)
{
	chk_rra(sta);
	chk_rrb(stb);
}
