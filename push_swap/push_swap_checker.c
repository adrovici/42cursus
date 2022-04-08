/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_checker.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 19:36:11 by umartin-          #+#    #+#             */
/*   Updated: 2022/04/07 12:24:05 by umartin-         ###   ########.fr       */
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
			if ((int)temp2->content == (int)temp1->content)
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
			if ((int)temp2->content < (int)temp1->content)
				return (0);
			temp2 = temp2->next;
		}
		temp1 = temp1->next;
	}
	return (1);
}

void	arg_num_chkr(t_list **sta, t_list **stb, t_list **result, t_push *push)
{
	t_list	*temp;
	int		n;

	if (*sta == NULL)
		return ;
	temp = *sta;
	n = ft_lstsize(temp);
	if (n == 3)
		case_3(sta, result);
	else if (n == 4 || n == 5)
		case_5(sta, stb, result);
	else if ((n > 5) && (n < 50))
		case_standard(sta, stb, result);
	else if (n == 2)
		psw_sa(sta, result);
	else if ((n >= 50) && (n < 500))
		t_c_o(sta, stb, result, push);
	else if (n >= 500)
		t_c_o_500(sta, stb, result, push);
}
