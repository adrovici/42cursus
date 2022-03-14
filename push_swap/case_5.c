/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 14:59:41 by umartin-          #+#    #+#             */
/*   Updated: 2022/03/14 17:26:39 by umartin-         ###   ########.fr       */
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
	t = (int)temp->content;
	temp = temp->next;
	while (temp != NULL)
	{
		if ((int)temp->content < t)
			t = (int)temp->content;
		temp = temp->next;
	}
	temp = *sta;
	cc = min_pos_finder(sta, stb, t, cc);
	if (cc < (c / 2 + 1))
		case_5_2(sta, stb, t);
	if (cc >= (c / 2 + 1))
		case_5_3(sta, stb, t);
}

int	min_pos_finder(t_list **sta, t_list **stb, int t, int cc)
{
	t_list	*temp;

	temp = *sta;
	while ((int)temp->content != t)
	{
		temp = temp->next;
		cc++;
	}
	return (cc);
}

void	case_5_2(t_list **sta, t_list **stb, int t)
{
	t_list	*temp;
	t_list	*tempb;

	temp = *sta;
	if (t == (int)temp->content)
		case_5_1(sta, stb);
	else
	{
		psw_ra(sta);
		case_5(sta, stb);
	}
}

void	case_5_3(t_list **sta, t_list **stb, int t)
{
	t_list	*temp;
	t_list	*tempb;

	temp = *sta;
	if (t == (int)temp->content)
		case_5_1(sta, stb);
	else
	{
		psw_rra(sta);
		case_5(sta, stb);
	}
}

void	case_5_1(t_list **sta, t_list **stb)
{
	t_list	*temp;
	t_list	*tempb;

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
			if ((int)tempb->content < (int)tempb->next->content)
			{
				psw_sb(stb);
				doble_pa(sta, stb);
			}
			else
				doble_pa(sta, stb);
		}
	}
}
