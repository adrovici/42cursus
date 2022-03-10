/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 14:59:41 by umartin-          #+#    #+#             */
/*   Updated: 2022/03/10 16:53:38 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	case_5(t_list **sta, t_list **stb)
{
	t_list	*temp;
	t_list	*tempb;
	int		t;
	int		c;
	int		cc;

	temp = *sta;
	c = ft_lstsize(temp);
	cc = 0;
	t = temp->content;
	temp = temp->next;
	while (temp->next != NULL)
	{
		if (temp->content < t)
			t = temp->content;
		temp = temp->next;
	}
	temp = *sta;
	while (temp->content != t)
	{
		temp = temp->next;
		cc++;
	}
	printf ("me cago en todo lo cagable %i\n", cc);
	if (cc > (c / 2))
	{
		psw_rra(sta);
		temp = *sta;
		if (t != temp->content)
			case_5(sta, stb);
		else
		{
			psw_pb(sta, stb);
			temp = *sta;
			if (ft_lstsize(temp) == 3)
			{
				case_3(sta);
				tempb = *stb;
				if (tempb->content < tempb->next->content)
				{
					psw_sb(stb);
					psw_pa(sta, stb);
					psw_pa(sta, stb);
				}
				else
				{
					psw_pa(sta, stb);
					psw_pa(sta, stb);
				}
			}
			else
				case_5(sta, stb);
		}
	}
	else
	{
		psw_ra(sta);
		temp = *sta;
		if (t != temp->content)
			case_5(sta, stb);
		else
		{
			psw_pb(sta, stb);
			temp = *sta;
			if (ft_lstsize(temp) == 3)
			{
				case_3(sta);
				tempb = *stb;
				if (tempb->content < tempb->next->content)
				{
					psw_sb(stb);
					psw_pa(sta, stb);
					psw_pa(sta, stb);
				}
				else
				{
					psw_pa(sta, stb);
					psw_pa(sta, stb);
				}
			}
			else
				case_5(sta, stb);
		}
	}
}
