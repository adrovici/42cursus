/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   i_case_3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 18:06:27 by umartin-          #+#    #+#             */
/*   Updated: 2022/03/21 15:39:03 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include "push_swap.h"

void	i_case_3(t_list	**stb, t_list **result)
{
	t_list	*temp;

	temp = *stb;
	if (temp == NULL || temp->next == NULL || temp->next->next == NULL)
		return ;
	else if (((int)temp->content < (int)temp->next->content)
		&& ((int)temp->next->content < (int)temp->next->next->content)
		&& ((int)temp->content < (int)temp->next->next->content))
		i_case_3_1(stb, result);
	else if (((int)temp->content < (int)temp->next->content)
		&& ((int)temp->next->content > (int)temp->next->next->content)
		&& ((int)temp->content > (int)temp->next->next->content))
		psw_sb(stb, result);
	else if (((int)temp->content < (int)temp->next->content)
		&& ((int)temp->next->content > (int)temp->next->next->content)
		&& ((int)temp->content < (int)temp->next->next->content))
		psw_rb(stb, result);
	else if (((int)temp->content > (int)temp->next->content)
		&& ((int)temp->next->content < (int)temp->next->next->content)
		&& ((int)temp->content < (int)temp->next->next->content))
		psw_rrb(stb, result);
	else if (((int)temp->content > (int)temp->next->content)
		&& ((int)temp->next->content < (int)temp->next->next->content)
		&& ((int)temp->content > (int)temp->next->next->content))
		i_case_3_2(stb, result);
}

void	i_case_3_1(t_list	**stb, t_list **result)
{
	psw_rb(stb, result);
	psw_sb(stb, result);
}

void	i_case_3_2(t_list	**stb, t_list **result)
{
	psw_rrb(stb, result);
	psw_sb(stb, result);
}
