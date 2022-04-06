/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_spmoves.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 18:46:03 by umartin-          #+#    #+#             */
/*   Updated: 2022/04/06 13:44:41 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	psw_sa(t_list **sta, t_list **result)
{
	t_list	*temp1;
	t_list	*temp2;
	int		r;

	if (*sta == NULL)
		return ;
	r = 31;
	temp1 = *sta;
	if (temp1->next == NULL)
		return ;
	temp2 = temp1->next;
	temp1->next = temp2->next;
	temp2->next = temp1;
	*sta = temp2;
	ft_lstadd_back(result, ft_lstnew(r));
}

void	psw_sb(t_list **stb, t_list **result)
{
	t_list	*temp1;
	t_list	*temp2;
	int		r;

	if (*stb == NULL)
		return ;
	r = 32;
	temp1 = *stb;
	temp2 = temp1->next;
	temp1->next = temp2->next;
	temp2->next = temp1;
	*stb = temp2;
	ft_lstadd_back(result, ft_lstnew(r));
}

void	psw_pa(t_list **sta, t_list **stb, t_list **result)
{
	t_list	*temp1;
	int		r;

	if (*stb == NULL)
		return ;
	r = 41;
	temp1 = *stb;
	if (temp1->next != NULL)
		*stb = temp1->next;
	else
		*stb = NULL;
	ft_lstadd_front(sta, temp1);
	ft_lstadd_back(result, ft_lstnew(r));
}

void	psw_pb(t_list **sta, t_list **stb, t_list **result)
{
	t_list	*temp1;
	int		r;

	if (*sta == NULL)
		return ;
	r = 42;
	temp1 = *sta;
	if (temp1->next != NULL)
		*sta = temp1->next;
	else
		*sta = NULL;
	ft_lstadd_front(stb, temp1);
	ft_lstadd_back(result, ft_lstnew(r));
}
