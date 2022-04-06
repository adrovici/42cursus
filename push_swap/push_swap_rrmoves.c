/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_rrmoves.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 16:46:27 by umartin-          #+#    #+#             */
/*   Updated: 2022/04/06 13:43:20 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	psw_rra(t_list **sta, t_list **result)
{
	t_list	*temp1;
	t_list	*temp2;
	int		r;

	if (*sta == NULL)
		return ;
	r = 21;
	temp1 = *sta;
	temp2 = *sta;
	while (temp1->next != NULL)
		temp1 = temp1->next;
	while (temp2->next != temp1)
		temp2 = temp2->next;
	temp2->next = NULL;
	ft_lstadd_front(sta, temp1);
	ft_lstadd_back(result, ft_lstnew(r));
}

void	psw_rrb(t_list **stb, t_list **result)
{
	t_list	*temp1;
	t_list	*temp2;
	int		r;

	if (*stb == NULL)
		return ;
	r = 22;
	temp1 = *stb;
	temp2 = *stb;
	while (temp1->next != NULL)
		temp1 = temp1->next;
	while (temp2->next != temp1)
		temp2 = temp2->next;
	temp2->next = NULL;
	ft_lstadd_front(stb, temp1);
	ft_lstadd_back(result, ft_lstnew(r));
}

void	psw_rrr(t_list **sta, t_list **stb, t_list **result)
{
	t_list	*temp1;
	t_list	*temp2;
	t_list	*tempb1;
	t_list	*tempb2;

	if ((*stb == NULL) || (*sta == NULL))
		return ;
	temp1 = *sta;
	temp2 = *sta;
	while (temp1->next != NULL)
		temp1 = temp1->next;
	while (temp2->next != temp1)
		temp2 = temp2->next;
	temp2->next = NULL;
	ft_lstadd_front(sta, temp1);
	tempb1 = *stb;
	tempb2 = *stb;
	while (tempb1->next != NULL)
		tempb1 = tempb1->next;
	while (tempb2->next != tempb1)
		tempb2 = tempb2->next;
	tempb2->next = NULL;
	ft_lstadd_front(stb, tempb1);
	ft_lstadd_back(result, ft_lstnew(50));
}
