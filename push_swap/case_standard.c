/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_standard.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 14:38:31 by umartin-          #+#    #+#             */
/*   Updated: 2022/03/14 17:27:10 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	case_standard(t_list **sta, t_list **stb)
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
		case_standard_utils_ra(sta, stb, t, c);
	if (cc >= (c / 2 + 1))
		case_standard_utils_rra(sta, stb, t, c);
}

void	case_standard_utils_ra(t_list **sta, t_list **stb, int t, int c)
{
	t_list	*temp;
	t_list	*tempb;

	temp = *sta;
	if (t == (int)temp->content)
	{
		psw_pb(sta, stb);
		temp = *sta;
		if (ft_lstsize(temp) != (0))
			case_standard(sta, stb);
		else
		{
			tempb = *stb;
			while (c-- != 0)
				all_b_to_a(sta, stb);
			return ;
		}
	}
	else
	{
		psw_ra(sta);
		case_standard(sta, stb);
	}
}

void	case_standard_utils_rra(t_list **sta, t_list **stb, int t, int c)
{
	t_list	*temp;
	t_list	*tempb;

	temp = *sta;
	if (t == (int)temp->content)
	{
		psw_pb(sta, stb);
		temp = *sta;
		if (ft_lstsize(temp) != (0))
			case_standard(sta, stb);
		else
		{
			tempb = *stb;
			while (c-- != 0)
				all_b_to_a(sta, stb);
			return ;
		}
	}
	else
	{
		psw_rra(sta);
		case_standard(sta, stb);
	}
}

void	all_b_to_a(t_list **sta, t_list **stb)
{
	t_list	*temp;
	int		a;

	if (stb == NULL)
		return ;
	temp = *stb;
	a = ft_lstsize(temp);
	while (a != 0)
	{
		psw_pa(sta, stb);
		temp = *stb;
		a = ft_lstsize(temp);
	}
}
