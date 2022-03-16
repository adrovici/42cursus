/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   i_case_3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 18:06:27 by umartin-          #+#    #+#             */
/*   Updated: 2022/03/16 18:17:46 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include "push_swap.h"

void	i_case_3(t_list	**stb)
{
	t_list	*temp;

	temp = *stb;
	if (temp == NULL || temp->next == NULL || temp->next->next == NULL)
		return ;
	else if (((int)temp->content < (int)temp->next->content)
		&& ((int)temp->next->content < (int)temp->next->next->content)
		&& ((int)temp->content < (int)temp->next->next->content))
		i_case_3_1(stb);
	else if (((int)temp->content < (int)temp->next->content)
		&& ((int)temp->next->content > (int)temp->next->next->content)
		&& ((int)temp->content > (int)temp->next->next->content))
		psw_sb(stb);
	else if (((int)temp->content < (int)temp->next->content)
		&& ((int)temp->next->content > (int)temp->next->next->content)
		&& ((int)temp->content < (int)temp->next->next->content))
		psw_rb(stb);
	else if (((int)temp->content > (int)temp->next->content)
		&& ((int)temp->next->content < (int)temp->next->next->content)
		&& ((int)temp->content < (int)temp->next->next->content))
		psw_rrb(stb);
	else if (((int)temp->content > (int)temp->next->content)
		&& ((int)temp->next->content < (int)temp->next->next->content)
		&& ((int)temp->content > (int)temp->next->next->content))
		i_case_3_2(stb);
}

void	i_case_3_1(t_list	**stb)
{
	psw_rb(stb);
	psw_sb(stb);
}

void	i_case_3_2(t_list	**stb)
{
	psw_rrbpsw_sb(stb);
	psw_sb(stb);
}
