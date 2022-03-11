/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 14:59:41 by umartin-          #+#    #+#             */
/*   Updated: 2022/03/11 13:29:34 by umartin-         ###   ########.fr       */
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
	while (temp != NULL)
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
	temp = *sta;
	if (cc < (c / 2 + 1))
	{
		if (t == temp->content)
		{
			psw_pb(sta, stb);
			temp = *sta;
			if (ft_lstsize(temp) != 3)
				case_5(sta, stb);
			else if (ft_lstsize(temp) == 3)
			{
				case_3(sta);
				tempb = *stb;
				if (ft_lstsize(tempb) == 1)
					psw_pa(sta, stb);
				else
				{
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
			}
		}
		else
		{
			psw_ra(sta);
			case_5(sta, stb);
		}
	}
	temp = *sta;
	if (cc >= (c / 2 + 1))
	{
		if (t == temp->content)
		{
			psw_pb(sta, stb);
			temp = *sta;
			if (ft_lstsize(temp) != 3)
				case_5(sta, stb);
			else
			{
				case_3(sta);
				tempb = *stb;
				if (ft_lstsize(tempb) == 1)
					psw_pa(sta, stb);
				else
				{
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
			}
		}
		else
		{
			psw_rra(sta);
			case_5(sta, stb);
		}
	}
}
