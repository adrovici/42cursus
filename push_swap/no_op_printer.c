/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   no_op_printer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 13:55:28 by umartin-          #+#    #+#             */
/*   Updated: 2022/04/06 13:49:13 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	no_op_printer(t_list **res)
{
	t_list	*temp;
	int		c;

	temp = *res;
	c = 0;
	while (c != 3 && temp != NULL)
	{
		if (temp->content == 11)
			ft_printf("ra\n");
		if (temp->content == 12)
			ft_printf("rb\n");
		if (temp->content == 21)
			ft_printf("rra\n");
		if (temp->content == 22)
			ft_printf("rrb\n");
		if (temp->content == 31)
			ft_printf("sa\n");
		if (temp->content == 41)
			ft_printf("pa\n");
		if (temp->content == 42)
			ft_printf("pb\n");
		if (temp->content == 50)
			ft_printf("rrr\n");
		temp = temp->next;
	}
}
