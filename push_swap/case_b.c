/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 16:03:52 by umartin-          #+#    #+#             */
/*   Updated: 2022/03/16 18:03:04 by umartin-         ###   ########.fr       */
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
	printf ("el toto flow langosta %i\n", current);
	if (!case_b_is_possible(stb, current))
		is_minim(sta, stb);
	else
	{
		next = next_min_num(sta, current);
		printf ("el problema %i\n", next);
		tempb = *stb;
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
	while (i > 0)
		psw_rb(stb);
}

void	rb_solver(t_list **stb, int i)
{
	psw_sb(stb);
	i = i + 2;
	while (i > 0)
		psw_rrb(stb);
}

int	case_b_is_possible(t_list **stb, int current)
{
	t_list	*tempb;

	tempb = *stb;
	while (tempb)
	{
		if ((int)tempb->content > current)
			return (0);
	}
	printf("no c puede\n");
	return (1);
}

void	is_minim(t_list **sta, t_list **stb)
{
	psw_pb(sta, stb);
	psw_rb(stb);
}
