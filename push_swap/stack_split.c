/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_split.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 14:39:54 by umartin-          #+#    #+#             */
/*   Updated: 2022/04/06 18:18:31 by umartin-         ###   ########.fr       */
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
				if ((int)temp->content == min_num_finder(stb))
				{
					psw_pa(sta, stb, result);
					psw_ra(sta, result);
				}
				temp = *stb;
				if (r_or_rr(stb, current))
					psw_rrb(stb, result);
				else if (!r_or_rr(stb, current))
					psw_rb(stb, result);
				temp = *stb;
			}
			psw_pa(sta, stb, result);
			temp = *stb;
		}
	}
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
				if ((int)temp->content == min_num_finder(stb))
				{
					psw_pa(sta, stb, result);
					psw_ra(sta, result);
				}
				temp = *stb;
				if (r_or_rr(stb, current))
					psw_rrb(stb, result);
				else if (!r_or_rr(stb, current))
					psw_rb(stb, result);
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
				if ((int)temp->content == min_num_finder(stb))
				{
					psw_pa(sta, stb, result);
					psw_ra(sta, result);
				}
				temp = *stb;
				if (r_or_rr(stb, current))
					psw_rrb(stb, result);
				else if (!r_or_rr(stb, current))
					psw_rb(stb, result);
				temp = *stb;
			}
			psw_pa(sta, stb, result);
			temp = *stb;
		}
	}
}

void	stack2_split_2(t_list **sta, t_list **stb, t_list **result, t_push *push)
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
				if ((int)temp->content == min_num_finder(stb))
				{
					psw_pa(sta, stb, result);
					psw_ra(sta, result);
				}
				temp = *stb;
				if (r_or_rr(stb, current))
					psw_rrb(stb, result);
				else if (!r_or_rr(stb, current))
					psw_rb(stb, result);
				temp = *stb;
			}
			psw_pa(sta, stb, result);
			temp = *stb;
		}
	}
}