/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   result_printer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 16:49:20 by umartin-          #+#    #+#             */
/*   Updated: 2022/03/21 19:49:00 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	result_printer(t_list **res)
{
	t_list	*temp;
	int		a_count;
	int		b_count;
	int		boo;
	int		boob;

	temp = *res;
	while (temp != NULL)
	{
		if (temp->content == 11)
		{
			a_count++;
			boo = 1;
		}
		if (temp->content == 12)
		{
			b_count++;
			boob = 2;
		}
		if (temp->content == 21)
		{
			a_count++;
			boo = 2;
		}
		if (temp->content == 22)
		{
			if ((temp->next->content == 11) || (temp->next->content == 21))
				continue ;
			else
			{
				b_count++;
				boob = 2;
			}
		}
		if (temp->content == 31)
			ft_printf("sa\n");
		if (temp->content == 32)
			ft_printf("sb\n");
		if (temp->content == 41)
			ft_printf("pa\n");
		if (temp->content == 42)
		{
			if (boo == boob)
			{
				if (boo == 1)
				{
					if (a_count > b_count)
					{
						a_count = a_count - b_count;
						while (b_count-- > 0)
							ft_printf("rr\n");
						while (a_count-- > 0)
							ft_printf("ra\n");
					}
					else
					{
						b_count = b_count - a_count;
						while (a_count-- > 0)
							ft_printf("rr\n");
						while (b_count-- > 0)
							ft_printf("rb\n");
					}
				}
				else
				{
					if (a_count < b_count)
					{
						a_count = a_count - b_count;
						while (b_count-- > 0)
							ft_printf("rrr\n");
						while (a_count-- > 0)
							ft_printf("rra\n");
					}
					else
					{
						b_count = b_count - a_count;
						while (a_count-- > 0)
							ft_printf("rrr\n");
						while (b_count-- > 0)
							ft_printf("rrb\n");
					}
				}
			}
			else
			{
				if (boo == 1)
				{
					while (a_count-- > 0)
						ft_printf("ra\n");
				}
				else if (boo == 2)
				{
					while (a_count-- > 0)
						ft_printf("rra\n");
				}
				if (boob == 1)
				{
					while (b_count-- > 0)
						ft_printf("rb\n");
				}
				else if (boob == 2)
				{
					while (b_count-- > 0)
						ft_printf("rrb\n");
				}
			}
			a_count = 0;
			b_count = 0;
			boo = 0;
			ft_printf("pb\n");
		}
		temp = temp->next;
	}
}
