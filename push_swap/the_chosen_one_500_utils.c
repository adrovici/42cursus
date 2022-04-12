/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_c_o_500_utils.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 19:27:03 by umartin-          #+#    #+#             */
/*   Updated: 2022/04/06 19:27:20 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	a_to_b_sp_82(t_list **sta, t_list **stb, t_list **result, t_push *push)
{
	t_list	*temp;
	int		i;
	int		c;

	temp = *sta;
	i = 0;
	while (temp->content != min_num_finder(sta))
	{
		i++;
		temp = temp->next;
	}
	temp = *sta;
	c = 0;
	while (i-- != 0)
	{
		temp = *sta;
		if ((temp->content > push->stack8) && (temp->content <= push->stack12))
			psw_pb(sta, stb, result);
		else
		{
			psw_ra(sta, result);
			c++;
		}
	}
	return (c);
}

int	u_n_two_stck_500(t_list **sta, t_push *push)
{
	t_list	*temp;
	int		i;
	int		c;
	int		f;

	i = 0;
	c = 0;
	temp = *sta;
	while (temp->content <= push->stack8)
	{
		temp = temp->next;
		i++;
	}
	temp = *sta;
	while (c++ <= i)
	{
		if (temp->content <= push->stack7)
			f = c;
		temp = temp->next;
	}
	return (f);
}

void	a_b_spl_16(t_list **sta, t_list **stb, t_list **result, t_push *push)
{
	t_list	*temp;
	int		i;
	int		c;

	temp = *sta;
	i = ft_lstsize(temp);
	c = 0;
	while (i-- != 0)
	{
		temp = *sta;
		if ((temp->content >= push->min) && (temp->content <= push->stack8))
			psw_pb(sta, stb, result);
		else
		{
			psw_ra(sta, result);
			c++;
		}
	}
}

int	num_checker(char *str)
{
	int	i;

	if (str[0] == '-' || str[0] == '+')
	{
		if (ft_strlen(str) == 1)
			return (1);
		i = 1;
		while (str[i] != '\0')
		{
			if (str[i] < '0' || str[i] > '9')
				return (1);
			i++;
		}
		return (0);
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (1);
		i++;
	}
	return (0);
}
