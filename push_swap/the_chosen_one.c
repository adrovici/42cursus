/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   the_chosen_one.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 12:51:41 by umartin-          #+#    #+#             */
/*   Updated: 2022/03/30 17:02:11 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	the_chosen_one(t_list **sta, t_list **stb, t_list **result)
{
	t_list	*temp;
	t_list	*tempb;
	int		cla;
	int		mid;
	int		aux;

	temp = *sta;
	aux = (ft_lstsize(temp) / 8);
	mid = (ft_lstsize(temp) / 2);
	cla = cla_mid_finder(sta, ft_lstsize(temp));
	while (ft_lstsize(temp) > mid)
	{
		temp = *sta;
		if ((int)temp->content <= cla)
			psw_pb(sta, stb, result);
		else
			psw_ra(sta, result);
		temp = *sta;
	}
	tempb = *stb;
	while (ft_lstsize(tempb) > aux)
	{
		b_to_a_splitter(sta, stb, result);
		tempb = *stb;
	}
	b_to_a_orden(sta, stb, result);
	a_to_b_to_ord(sta, stb, result, aux + 1);
	a_to_b_splitter(sta, stb, result, aux * 2 + 1);
	b_to_a_orden(sta, stb, result);
	a_to_b_to_ord(sta, stb, result, aux + 1);
	a_to_b_splitter(sta, stb, result, nums_until_min(sta, min_num_finder(sta)));
	b_to_a_splitter(sta, stb, result);
	b_to_a_orden(sta, stb, result);
	a_to_b_to_ord(sta, stb, result, aux);
	a_to_b_splitter(sta, stb, result, nums_until_min(sta, min_num_finder(sta)));
	b_to_a_orden(sta, stb, result);
	a_to_b_to_ord(sta, stb, result, nums_until_min(sta, min_num_finder(sta)));
	b_to_a_orden(sta, stb, result);
}

void	a_to_b_splitter(t_list **sta, t_list **stb, t_list **result, int a)
{
	t_list	*temp;
	int		cla;
	int		aux;

	temp = *sta;
	aux = a / 2 + 1;
	cla = cla_next_finder(sta, a);
	while (a-- != 0)
	{
		temp = *sta;
		if ((int)temp->content <= cla)
			psw_pb(sta, stb, result);
		else
			psw_ra(sta, result);
		temp = *sta;
	}
	while (aux-- != 0)
		psw_rra(sta, result);
}

void	a_to_b_to_ord(t_list **sta, t_list **stb, t_list **result, int a)
{
	while (a-- != 0)
		psw_pb(sta, stb, result);
	b_to_a_orden(sta, stb, result);
}

void	b_to_a_orden(t_list **sta, t_list **stb, t_list **result)
{
	t_list	*temp;
	int		current;
	int		aux;

	temp = *stb;
	aux = ft_lstsize(temp);
	while (ft_lstsize(temp) != 0)
	{
		current = max_num_finder(stb);
		while ((int)temp->content != current)
		{
			if ((int)temp->content == min_num_finder(&temp))
			{
				psw_pa(sta, stb, result);
				psw_ra(sta, result);
				aux--;
			}
			temp = *stb;
			if (ft_lstsize(temp) == 1)
			{
				psw_pa(sta, stb, result);
				psw_ra(sta, result);
				aux--;
				break ;
			}
			if ((r_or_rr(stb, current) && (ft_lstsize(temp) != 0)))
				psw_rrb(stb, result);
			else if ((!r_or_rr(stb, current) && (ft_lstsize(temp) != 0)))
				psw_rb(stb, result);
			temp = *stb;
		}
		psw_pa(sta, stb, result);
		temp = *stb;
	}
	while (aux-- != 0)
		psw_ra(sta, result);
}

void	b_to_a_splitter(t_list **sta, t_list **stb, t_list **result)
{
	t_list	*tempb;
	int		cla;
	int		mid;

	tempb = *stb;
	mid = (ft_lstsize(tempb) / 2);
	cla = cla_mid_finder(stb, ft_lstsize(tempb));
	while (ft_lstsize(tempb) > mid)
	{
		tempb = *stb;
		if ((int)tempb->content > cla)
			psw_pa(sta, stb, result);
		else
			psw_rb(stb, result);
		tempb = *stb;
	}
}

int	cla_mid_finder(t_list	**sta, int a)
{
	t_list	*temp;
	int		i;
	int		min;
	int		cla;

	i = 0;
	min = min_num_finder(sta);
	cla = next_min_num(sta, min);
	while (i < ((a / 2) - 2))
	{
		cla = next_min_num(sta, cla);
		i++;
	}
	return (cla);
}

int	cla_next_finder(t_list	**sta, int a)
{
	t_list	*temp;
	int		i;
	int		min;
	int		cla;

	i = 0;
	min = min_num_finder_algo(sta, a);
	cla = next_min_num_algo(sta, min, a);
	while (i < ((a / 2) - 2))
	{
		cla = next_min_num_algo(sta, cla, a);
		i++;
	}
	return (cla);
}

int	min_num_finder_algo(t_list	**sta, int a)
{
	t_list	*temp;
	int		min;

	temp = *sta;
	min = (int)temp->content;
	temp = temp->next;
	while (a-- != 0)
	{
		if ((int)temp->content < min)
			min = (int)temp->content;
		temp = temp->next;
	}
	return (min);
}

int	next_min_num_algo(t_list	**sta, int min, int a)
{
	t_list	*temp;
	int		n;

	temp = *sta;
	n = max_num_finder_algo(sta, a);
	while (a-- != 0)
	{
		if ((int)temp->content < n && (int)temp->content > min)
			n = (int)temp->content;
		temp = temp->next;
	}
	return (n);
}

int	nums_until_min(t_list	**sta, int a)
{
	t_list	*temp;
	int		c;

	temp = *sta;
	c = 0;
	while (temp)
	{
		if (temp->content == a)
			break ;
		temp = temp->next;
		c++;
	}
	return (c);
}

int	max_num_finder_algo(t_list	**sta, int a)
{
	t_list	*temp;
	int		max;

	temp = *sta;
	max = (int)temp->content;
	temp = temp->next;
	while (a-- != 0)
	{
		if ((int)temp->content > max)
			max = (int)temp->content;
		temp = temp->next;
	}
	return (max);
}
