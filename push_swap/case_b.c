/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 16:03:52 by umartin-          #+#    #+#             */
/*   Updated: 2022/03/21 16:00:19 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	case_b(t_list **sta, t_list **stb, int current, t_list **result)
{
	t_list	*tempb;
	int		next;
	int		c;
	int		i;

	c = 0;
	if (case_b_is_possible(stb, current) == 1)
		is_minim(sta, stb, result);
	else if (case_b_is_possible_m(stb, current) == 1)
		psw_pb(sta, stb, result);
	else
	{
		next = previous_finder(stb, current);
		if (r_or_rr_b(stb, next) == 1)
		{
			i = 0;
			tempb = *stb;
			while ((int)tempb->content != next)
			{
				psw_rrb(stb, result);
				i++;
				tempb = *stb;
			}
			psw_pb(sta, stb, result);
			rrb_solver(stb, i, result);
		}
		else
		{
			i = 0;
			tempb = *stb;
			while ((int)tempb->content != next)
			{
				psw_rb(stb, result);
				i++;
				tempb = *stb;
			}
			psw_pb(sta, stb, result);
			rb_solver(stb, i, result);
		}
	}
	return ;
}

void	rrb_solver(t_list **stb, int i, t_list **result)
{
	i = i + 1;
	while (i > 0)
	{
		psw_rb(stb, result);
		i--;
	}
}

void	rb_solver(t_list **stb, int i, t_list **result)
{
	while (i > 0)
	{
		psw_rrb(stb, result);
		i--;
	}
}

int	case_b_is_possible(t_list **stb, int current)
{
	t_list	*tempb;

	tempb = *stb;
	while (tempb != NULL)
	{
		if ((int)tempb->content < current)
		{
			return (0);
		}
		tempb = tempb->next;
	}
	return (1);
}

int	case_b_is_possible_m(t_list **stb, int current)
{
	t_list	*tempb;

	tempb = *stb;
	while (tempb != NULL)
	{
		if ((int)tempb->content > current)
		{
			return (0);
		}
		tempb = tempb->next;
	}
	return (1);
}

void	is_minim(t_list **sta, t_list **stb, t_list **result)
{
	psw_pb(sta, stb, result);
	psw_rb(stb, result);
}
