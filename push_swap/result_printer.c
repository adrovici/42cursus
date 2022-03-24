/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   result_printer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 16:49:20 by umartin-          #+#    #+#             */
/*   Updated: 2022/03/24 16:47:47 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	real_printer(t_list **res)
{
	t_list	*temp;
	int		c;

	temp = *res;
	c = 0;
	while (c != 3 && temp != NULL)
	{
		if (temp->content == 11)
			ft_printf("ra\n");
		if (temp->content == 21)
			ft_printf("rra\n");
		if (temp->content == 31)
			ft_printf("sa\n");
		if (temp->content == 32)
			ft_printf("sb\n");
		if (temp->content == 41)
			ft_printf("pa\n");
		if (temp->content == 42)
		{
			ft_printf("pb\n");
			c++;
		}
		temp = temp->next;
	}
	result_printer (&temp);
}

void	result_printer(t_list **res)
{
	t_list	*temp;
	int		count_ra;
	int		count_rra;
	int		count_rb;
	int		count_rrb;

	temp = *res;
	count_ra = 0;
	count_rra = 0;
	count_rb = 0;
	count_rrb = 0;
	while (temp)
	{
		if (temp->content == 11)
			count_ra++;
		if (temp->content == 12)
			count_rb++;
		if (temp->content == 21)
			count_rra++;
		if (temp->content == 22)
			count_rrb++;
		if (temp->content == 31)
			ft_printf("sa\n");
		if (temp->content == 32)
			ft_printf("sb\n");
		if (temp->content == 41)
		{
			if (count_ra > count_rb)
			{
				count_ra = count_ra - count_rb;
				while (count_rb-- != 0)
					ft_printf("rr\n");
				while (count_ra-- != 0)
					ft_printf("ra\n");
			}
			else if (count_ra < count_rb)
			{
				count_rb = count_rb - count_ra;
				while (count_ra-- != 0)
					ft_printf("rr\n");
				while (count_rb-- != 0)
					ft_printf("rb\n");
			}
			else if (count_ra == count_rb)
			{
				while (count_rb-- != 0)
					ft_printf("rr\n");
			}
			if (count_rra > count_rrb)
			{
				count_rra = count_rra - count_rrb;
				while (count_rrb-- != 0)
					ft_printf("rrr\n");
				while (count_rra-- != 0)
					ft_printf("rra\n");
			}
			else if (count_rra < count_rrb)
			{
				count_rrb = count_rrb - count_rra;
				while (count_rra-- != 0)
					ft_printf("rrr\n");
				while (count_rrb-- != 0)
					ft_printf("rrb\n");
			}
			else if (count_rra == count_rrb)
			{
				while (count_rrb-- != 0)
					ft_printf("rrr\n");
			}
			count_ra = 0;
			count_rb = 0;
			count_rra = 0;
			count_rrb = 0;
			ft_printf("pa\n");
		}
		if (temp->content == 42)
		{
			if (count_ra > count_rb)
			{
				count_ra = count_ra - count_rb;
				while (count_rb-- != 0)
					ft_printf("rr\n");
				while (count_ra-- != 0)
					ft_printf("ra\n");
			}
			else if (count_ra < count_rb)
			{
				count_rb = count_rb - count_ra;
				while (count_ra-- != 0)
					ft_printf("rr\n");
				while (count_rb-- != 0)
					ft_printf("rb\n");
			}
			else if (count_ra == count_rb)
			{
				while (count_rb-- != 0)
					ft_printf("rr\n");
			}
			if (count_rra > count_rrb)
			{
				count_rra = count_rra - count_rrb;
				while (count_rrb-- != 0)
					ft_printf("rrr\n");
				while (count_rra-- != 0)
					ft_printf("rra\n");
			}
			else if (count_rra < count_rrb)
			{
				count_rrb = count_rrb - count_rra;
				while (count_rra-- != 0)
					ft_printf("rrr\n");
				while (count_rrb-- != 0)
					ft_printf("rrb\n");
			}
			else if (count_rra == count_rrb)
			{
				while (count_rrb-- != 0)
					ft_printf("rrr\n");
			}
			count_ra = 0;
			count_rb = 0;
			count_rra = 0;
			count_rrb = 0;
			ft_printf("pb\n");
		}
		temp = temp->next;
	}
}
