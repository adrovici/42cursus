/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 12:47:52 by umartin-          #+#    #+#             */
/*   Updated: 2022/03/14 17:26:09 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	case_3(t_list	**sta)
{
	t_list	*temp;

	temp = *sta;
	if (temp == NULL || temp->next == NULL || temp->next->next == NULL)
		return ;
	else if (((int)temp->content > (int)temp->next->content)
		&& ((int)temp->next->content > (int)temp->next->next->content)
		&& ((int)temp->content > (int)temp->next->next->content))
		case_3_1(sta);
	else if (((int)temp->content > (int)temp->next->content)
		&& ((int)temp->next->content < (int)temp->next->next->content)
		&& ((int)temp->content < (int)temp->next->next->content))
		psw_sa(sta);
	else if (((int)temp->content > (int)temp->next->content)
		&& ((int)temp->next->content < (int)temp->next->next->content)
		&& ((int)temp->content > (int)temp->next->next->content))
		psw_ra(sta);
	else if (((int)temp->content < (int)temp->next->content)
		&& ((int)temp->next->content > (int)temp->next->next->content)
		&& ((int)temp->content > (int)temp->next->next->content))
		psw_rra(sta);
	else if (((int)temp->content < (int)temp->next->content)
		&& ((int)temp->next->content > (int)temp->next->next->content)
		&& ((int)temp->content < (int)temp->next->next->content))
		case_3_2(sta);
}

void	case_3_1(t_list	**sta)
{
	psw_ra(sta);
	psw_sa(sta);
}

void	case_3_2(t_list	**sta)
{
	psw_rra(sta);
	psw_sa(sta);
}
