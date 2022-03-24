/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 12:47:52 by umartin-          #+#    #+#             */
/*   Updated: 2022/03/24 13:47:12 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	case_3(t_list **sta, t_list **result)
{
	t_list	*temp;

	temp = *sta;
	if (temp == NULL || temp->next == NULL || temp->next->next == NULL)
		return ;
	else if (((int)temp->content > (int)temp->next->content)
		&& ((int)temp->next->content > (int)temp->next->next->content)
		&& ((int)temp->content > (int)temp->next->next->content))
		case_3_1(sta, result);
	else if (((int)temp->content > (int)temp->next->content)
		&& ((int)temp->next->content < (int)temp->next->next->content)
		&& ((int)temp->content < (int)temp->next->next->content))
		psw_sa(sta, result);
	else if (((int)temp->content > (int)temp->next->content)
		&& ((int)temp->next->content < (int)temp->next->next->content)
		&& ((int)temp->content > (int)temp->next->next->content))
		psw_ra(sta, result);
	else if (((int)temp->content < (int)temp->next->content)
		&& ((int)temp->next->content > (int)temp->next->next->content)
		&& ((int)temp->content > (int)temp->next->next->content))
		psw_rra(sta, result);
	else if (((int)temp->content < (int)temp->next->content)
		&& ((int)temp->next->content > (int)temp->next->next->content)
		&& ((int)temp->content < (int)temp->next->next->content))
		case_3_2(sta, result);
}

void	case_3_1(t_list	**sta, t_list **result)
{
	psw_sa(sta, result);
	psw_rra(sta, result);
}

void	case_3_2(t_list	**sta, t_list **result)
{
	psw_sa(sta, result);
	psw_ra(sta, result);
}
