/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_split.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 14:39:54 by umartin-          #+#    #+#             */
/*   Updated: 2022/04/08 10:59:21 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack4_split(t_list **sta, t_list **stb, t_list **result, t_push *push)
{
	t_list	*temp;
	int		current;

	temp = *stb;
	while (temp != NULL)
	{
		if ((int)temp->content <= push->stack2)
			temp = temp->next;
		else if (((int)temp->content <= push->stack4)
			&& ((int)temp->content > push->stack1))
		{
			current = (int)temp->content;
			temp = *stb;
			while ((int)temp->content != current)
			{
				split_helper(sta, stb, result, current);
				temp = *stb;
			}
			psw_pa(sta, stb, result);
			temp = *stb;
		}
	}
}

void	split_helper(t_list **sta, t_list **stb, t_list **result, int a)
{
	t_list	*temp;

	temp = *stb;
	if ((int)temp->content == min_num_finder(stb))
	{
		psw_pa(sta, stb, result);
		psw_ra(sta, result);
	}
	temp = *stb;
	if (r_or_rr(stb, a))
		psw_rrb(stb, result);
	else if (!r_or_rr(stb, a))
		psw_rb(stb, result);
}

void	stck4_2_spl(t_list **sta, t_list **stb, t_list **result, t_push *push)
{
	t_list	*temp;
	int		current;

	temp = *stb;
	while (temp != NULL)
	{
		if ((int)temp->content <= push->stack10)
			temp = temp->next;
		else if (((int)temp->content <= push->stack12)
			&& ((int)temp->content > push->stack9))
		{
			current = (int)temp->content;
			temp = *stb;
			while ((int)temp->content != current)
			{
				split_helper(sta, stb, result, current);
				temp = *stb;
			}
			psw_pa(sta, stb, result);
			temp = *stb;
		}
	}
}

void	stack2_split(t_list **sta, t_list **stb, t_list **result, t_push *push)
{
	t_list	*temp;
	int		current;

	temp = *stb;
	while (temp != NULL)
	{
		if ((int)temp->content <= push->stack1)
			temp = temp->next;
		else if (((int)temp->content <= push->stack2)
			&& ((int)temp->content > push->stack1))
		{
			current = (int)temp->content;
			temp = *stb;
			while ((int)temp->content != current)
			{
				split_helper(sta, stb, result, current);
				temp = *stb;
			}
			psw_pa(sta, stb, result);
			temp = *stb;
		}
	}
}

void	stk2_split_2(t_list **sta, t_list **stb, t_list **result, t_push *push)
{
	t_list	*temp;
	int		current;

	temp = *stb;
	while (temp != NULL)
	{
		if ((int)temp->content <= push->stack5)
			temp = temp->next;
		else if (((int)temp->content <= push->stack6)
			&& ((int)temp->content > push->stack5))
		{
			current = (int)temp->content;
			temp = *stb;
			while ((int)temp->content != current)
			{
				split_helper(sta, stb, result, current);
				temp = *stb;
			}
			psw_pa(sta, stb, result);
			temp = *stb;
		}
	}
}
