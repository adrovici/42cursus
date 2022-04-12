/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_rmoves.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 14:28:08 by umartin-          #+#    #+#             */
/*   Updated: 2022/04/12 12:11:46 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

void	chk_ra(t_list **sta)
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
}

void	chk_rb(t_list **stb)
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
}

void	chk_rr(t_list **sta, t_list **stb)
{
	chk_ra(sta);
	chk_rb(stb);
}
