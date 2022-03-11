/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_checker.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 19:36:11 by umartin-          #+#    #+#             */
/*   Updated: 2022/03/11 15:54:48 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rep_nums(t_list	**sta)
{
	t_list	*temp1;
	t_list	*temp2;

	if (*sta == NULL)
		return (0);
	temp1 = *sta;
	while (temp1 != NULL)
	{
		temp2 = temp1->next;
		while (temp2 != NULL)
		{
			if (temp2->content == temp1->content)
				return (1);
			temp2 = temp2->next;
		}
		temp1 = temp1->next;
	}
	return (0);
}

int	alr_ord(t_list	**sta)
{
	t_list	*temp1;
	t_list	*temp2;

	if (*sta == NULL)
		return (0);
	temp1 = *sta;
	while (temp1 != NULL)
	{
		temp2 = temp1->next;
		while (temp2 != NULL)
		{
			if (temp2->content < temp1->content)
				return (0);
			temp2 = temp2->next;
		}
		temp1 = temp1->next;
	}
	return (1);
}

void	arg_num_chkr(t_list **sta, t_list **stb)
{
	t_list	*temp;
	int		n;

	if (*sta == NULL)
		return ;
	temp = *sta;
	n = ft_lstsize(temp);
	if (n == 3)
		case_3(sta);
	else if (n == 4 || n == 5)
		case_5(sta, stb);
	else if ((n == 2) || (n > 5) && (n < 100))
		case_standard(sta, stb);
}
