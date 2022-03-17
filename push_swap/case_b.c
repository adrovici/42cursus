/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 16:03:52 by umartin-          #+#    #+#             */
/*   Updated: 2022/03/17 14:36:28 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	case_b(t_list **sta, t_list **stb, int current)
{
	t_list	*tempb;
	int		next;
	int		c;
	int		i;

	c = 0;
	if (case_b_is_possible(stb, current))
		is_minim(sta, stb);
	else if (case_b_is_possible_m(stb, current))
		psw_pb(sta, stb);
	else
	{
		next = next_min_num(stb, current);
		if (r_or_rr_b(stb, next))
		{
			i = 0;
			tempb = *stb;
			while ((int)tempb->content != next)
			{
				psw_rrb(stb);
				i++;
				tempb = *stb;
			}
			psw_pb(sta, stb);
			rrb_solver(stb, i);
		}
		else
		{
			i = 0;
			tempb = *stb;
			while ((int)tempb->content != next)
			{
				psw_rb(stb);
				i++;
				tempb = *stb;
			}
			psw_pb(sta, stb);
			rb_solver(stb, i);
		}
	}
	return ;
}

void	rrb_solver(t_list **stb, int i)
{
	i = i + 1;
	while (i >= 0)
	{
		psw_sb(stb);
		psw_rb(stb);
		i--;
	}
}

void	rb_solver(t_list **stb, int i)
{
	i = i + 1;
	while (i >= 0)
	{
		psw_rrb(stb);
		i--;
	}
}

int	case_b_is_possible(t_list **stb, int current)
{
	t_list	*tempb;

	tempb = *stb;
	while (tempb)
	{
		if ((int)tempb->content > current)
			return (0);
		tempb = tempb->next;
	}
	return (1);
}

int	case_b_is_possible_m(t_list **stb, int current)
{
	t_list	*tempb;

	tempb = *stb;
	while (tempb)
	{
		if ((int)tempb->content > current)
			return (0);
		tempb = tempb->next;
	}
	return (1);
}

void	is_minim(t_list **sta, t_list **stb)
{
	psw_pb(sta, stb);
	psw_rb(stb);
}
