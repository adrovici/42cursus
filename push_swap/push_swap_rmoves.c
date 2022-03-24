/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_rmoves.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 15:07:47 by umartin-          #+#    #+#             */
/*   Updated: 2022/03/24 17:49:19 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	psw_ra(t_list **sta, t_list **result)
{
	t_list	*temp1;
	int		r;

	if (*sta == NULL)
		return ;
	r = 11;
	temp1 = *sta;
	if (temp1->next != NULL)
		*sta = temp1->next;
	else
		*sta = NULL;
	ft_lstadd_back(sta, temp1);
	temp1->next = NULL;
	ft_lstadd_back(result, ft_lstnew(r));
}

void	psw_rb(t_list **stb, t_list **result)
{
	t_list	*temp1;
	int		r;

	if (*stb == NULL)
		return ;
	r = 12;
	temp1 = *stb;
	if (temp1->next != NULL)
		*stb = temp1->next;
	else
		*stb = NULL;
	ft_lstadd_back(stb, temp1);
	temp1->next = NULL;
	ft_lstadd_back(result, ft_lstnew(r));
}

void	doble_pa(t_list **sta, t_list **stb, t_list **result)
{
	psw_pa(sta, stb, result);
	psw_pa(sta, stb, result);
}
