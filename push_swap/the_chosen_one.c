/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   the_chosen_one.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 12:51:41 by umartin-          #+#    #+#             */
/*   Updated: 2022/04/06 19:12:03 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	the_chosen_one(t_list **sta, t_list **stb, t_list **result, t_push *push)
{
	t_list	*temp;
	int		aux;
	int		c;

	temp = *sta;
	aux = (ft_lstsize(temp) / 8);
	list_stack_init(sta, push, aux);
	a_to_b_spl_8 (sta, stb, result, push);
	stack4_split(sta, stb, result, push);
	stack2_split(sta, stb, result, push);
	b_to_a_orden(sta, stb, result);
	push->a = until_next_stack(sta, push);
	a_to_b_to_ord(sta, stb, result, push->a);
	push->a = until_next_two_stacks(sta, push);
	c = a_to_b_spl(sta, stb, result, push);
	rrr_advantage(sta, stb, result, c);
	b_to_a_orden(sta, stb, result);
	push->a = until_next_stack(sta, push);
	a_to_b_to_ord(sta, stb, result, push->a);
	push->a = until_next_four_stacks(sta, push);
	c = a_b_spl_4(sta, stb, result, push);
	rrr_advantage(sta, stb, result, c);
	stack2_split_2(sta, stb, result, push);
	b_to_a_orden(sta, stb, result);
	push->a = until_next_stack(sta, push);
	a_to_b_to_ord(sta, stb, result, push->a);
	push->a = until_next_two_stacks(sta, push);
	c = a_to_b_spl(sta, stb, result, push);
	rrr_advantage(sta, stb, result, c);
	b_to_a_orden(sta, stb, result);
	push->a = until_next_stack(sta, push);
	a_to_b_to_ord(sta, stb, result, push->a);
}

void	rrr_advantage(t_list **sta, t_list **stb, t_list **result, int c)
{
	t_list	*temp;
	int		min;
	int		size;
	int		i;
	int		mov;

	temp = *stb;
	i = 1;
	size = ft_lstsize(temp);
	min = min_num_finder(stb);
	while ((int)temp->content != min)
	{
		temp = temp->next;
		i++;
	}
	mov = size - i + 1;
	if (mov > c)
		while (c-- != 0)
			psw_rra(sta, result);
	else if (mov == c)
		while (c-- != 0)
			psw_rrr(sta, stb, result);
	else if (mov < c)
	{
		c = c - mov;
		while (mov-- != 0)
			psw_rrr(sta, stb, result);
		while (c-- != 0)
			psw_rra(sta, result);
	}
}

int	a_to_b_spl(t_list **sta, t_list **stb, t_list **result, t_push *push)
{
	t_list	*temp;
	int		i;
	int		c;

	i = push->a;
	c = 0;
	temp = *sta;
	if ((temp->content > push->stack2) && (temp->content <= push->stack4))
	{
		while (i-- != 0)
		{
			temp = *sta;
			if ((temp->content > push->stack2) && (temp->content <= push->stack3))
				psw_pb(sta, stb, result);
			else
			{
				psw_ra(sta, result);
				c++;
			}
		}
	}
	else if ((temp->content > push->stack5) && (temp->content <= push->max))
	{
		while (i-- != 0)
		{
			temp = *sta;
			if ((temp->content >= push->stack6) && (temp->content <= push->stack7))
				psw_pb(sta, stb, result);
			else
			{
				psw_ra(sta, result);
				c++;
			}
		}
	}
	return (c);
}

int	a_b_spl_4(t_list **sta, t_list **stb, t_list **result, t_push *push)
{
	t_list	*temp;
	int		i;
	int		c;

	i = push->a;
	c = 0;
	temp = *sta;
	while (i-- != 0)
	{
		temp = *sta;
		if ((temp->content > push->stack4) && (temp->content < push->stack6))
			psw_pb(sta, stb, result);
		else
		{
			psw_ra(sta, result);
			c++;
		}
	}
	return (c);
}

void	a_to_b_spl_8(t_list **sta, t_list **stb, t_list **result, t_push *push)
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
		if ((temp->content >= push->min) && (temp->content <= push->stack4))
			psw_pb(sta, stb, result);
		else
		{
			psw_ra(sta, result);
			c++;
		}
	}
}

void	a_to_b_to_ord(t_list **sta, t_list **stb, t_list **result, int a)
{
	t_list	*temp;
	t_list	*temp2;
	t_list	*temp3;

	temp = *sta;
	while (a-- != 0)
	{
		temp = *sta;
		temp2 = *sta;
		while (temp2->next != NULL)
			temp2 = temp2->next;
		if (temp->content == (temp2->content + 1))
			psw_ra(sta, result);
		else
			psw_pb(sta, stb, result);
		temp = temp->next;
	}
	b_to_a_orden(sta, stb, result);
}

void	b_to_a_orden(t_list **sta, t_list **stb, t_list **result)
{
	t_list	*temp;
	int		current;
	int		aux;

	temp = *stb;
	aux = (ft_lstsize(temp));
	while (ft_lstsize(temp) != 0)
	{
		current = max_num_finder(stb);
		while ((int)temp->content != current)
		{
			temp = *stb;
			if ((int)temp->content == min_num_finder(stb))
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
				aux --;
				break ;
			}
			temp = *stb;
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

int	until_next_stack(t_list **sta, t_push *push)
{
	t_list	*temp;
	int		i;

	i = 0;
	temp = *sta;
	if ((temp->content >= push->min) && (temp->content <= push->stack1))
	{
		while ((temp->content >= push->min) && (temp->content <= push->stack1))
		{
			temp = temp->next;
			i++;
		}
		return (i);
	}
	else if ((temp->content > push->stack1) && (temp->content <= push->stack2))
	{
		while ((temp->content > push->stack1) && (temp->content <= push->stack2))
		{
			temp = temp->next;
			i++;
		}
		return (i);
	}
	else if ((temp->content > push->stack2) && (temp->content <= push->stack3))
	{
		while ((temp->content > push->stack2) && (temp->content <= push->stack3))
		{
			temp = temp->next;
			i++;
		}
		return (i);
	}
	else if ((temp->content > push->stack3) && (temp->content <= push->stack4))
	{
		while ((temp->content > push->stack3) && (temp->content <= push->stack4))
		{
			temp = temp->next;
			i++;
		}
		return (i);
	}
	else if ((temp->content > push->stack4) && (temp->content <= push->stack5))
	{
		while ((temp->content > push->stack4) && (temp->content <= push->stack5))
		{
			temp = temp->next;
			i++;
		}
		return (i);
	}
	else if ((temp->content > push->stack5) && (temp->content <= push->stack6))
	{
		while ((temp->content > push->stack5) && (temp->content <= push->stack6))
		{
			temp = temp->next;
			i++;
		}
		return (i);
	}
	else if ((temp->content > push->stack6) && (temp->content <= push->stack7))
	{
		while ((temp->content > push->stack6) && (temp->content <= push->stack7))
		{
			temp = temp->next;
			i++;
		}
		return (i);
	}
	else if ((temp->content > push->stack7) && (temp->content <= push->max))
	{
		while ((temp->content > push->stack7) && (temp->content <= push->max))
		{
			temp = temp->next;
			i++;
		}
		return (i);
	}
}

int	until_next_two_stacks(t_list **sta, t_push *push)
{
	t_list	*temp;
	int		i;
	int		c;
	int		f;

	i = 0;
	c = 0;
	temp = *sta;
	if (temp->content < push->stack2)
	{
		while (temp->content <= push->stack2)
		{
			temp = temp->next;
			i++;
		}
		return (i);
	}
	else if ((temp->content > push->stack2) && (temp->content <= push->stack4))
	{
		while (temp->content <= push->stack4)
		{
			temp = temp->next;
			i++;
		}
		temp = *sta;
		while (c++ <= i)
		{
			if (temp->content <= push->stack3)
				f = c;
			temp = temp->next;
		}
		return (f);
	}
	else if ((temp->content > push->stack4) && (temp->content <= push->stack6))
	{
		while (temp->content <= push->stack6)
		{
			temp = temp->next;
			i++;
		}
		return (i);
	}
	else if ((temp->content > push->stack6) && (temp->content <= push->max))
	{
		while (temp->content != push->min)
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
}

int	until_next_four_stacks(t_list **sta, t_push *push)
{
	t_list	*temp;
	int		i;
	int		c;
	int		f;

	i = 0;
	c = 0;
	temp = *sta;
	if (temp->content <= push->stack4)
	{
		while (temp->content <= push->stack4)
		{
			temp = temp->next;
			i++;
		}
		temp = *sta;
		while (c++ <= i)
		{
			if (temp->content <= push->stack2)
				f = c;
			temp = temp->next;
		}
		return (f);
	}
	else if ((temp->content > push->stack4) && (temp->content <= push->max))
	{
		while (temp->content != push->min)
		{
			temp = temp->next;
			i++;
		}
		temp = *sta;
		while (c++ <= i)
		{
			if (temp->content <= push->stack6)
				f = c;
			temp = temp->next;
		}
		return (f);
	}
}

void	list_stack_init(t_list **sta, t_push *push, int aux)
{
	int	i;

	i = aux;
	aux = aux + 1;
	push->stack1 = cla_finder(sta, aux);
	aux = aux + i;
	push->stack2 = cla_finder(sta, aux);
	aux = aux + i + 1;
	push->stack3 = cla_finder(sta, aux);
	aux = aux + i;
	push->stack4 = cla_finder(sta, aux);
	aux = aux + i + 1;
	push->stack5 = cla_finder(sta, aux);
	aux = aux + i;
	push->stack6 = cla_finder(sta, aux);
	aux = aux + i + 1;
	push->stack7 = cla_finder(sta, aux);
	aux = aux + i;
	push->min = min_num_finder(sta);
	push->max = max_num_finder(sta);
}
