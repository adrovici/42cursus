/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   the_chosen_one_utils_3.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 10:49:01 by umartin-          #+#    #+#             */
/*   Updated: 2022/04/12 14:48:48 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra_printer(t_list **sta, t_list **result, int aux)
{
	while (aux-- != 0)
		psw_ra(sta, result);
}

int	b_to_a_ord_ut(t_list **sta, t_list **stb, t_list **result, int aux)
{
	psw_pa(sta, stb, result);
	psw_ra(sta, result);
	aux = aux - 1;
	return (aux);
}

void	b_to_a_ord_2(t_list **stb, t_list **result, t_push *push)
{
	t_list	*temp;

	temp = *stb;
	if ((r_or_rr(stb, push->ord_cu) && (ft_lstsize(temp) != 0)))
		psw_rrb(stb, result);
	else if ((!r_or_rr(stb, push->ord_cu) && (ft_lstsize(temp) != 0)))
		psw_rb(stb, result);
}

void	stack8_split(t_list **sta, t_list **stb, t_list **result, t_push *push)
{
	t_list	*temp;
	int		current;

	temp = *stb;
	while (temp != NULL)
	{
		if ((int)temp->content <= push->stack4)
			temp = temp->next;
		else if (((int)temp->content <= push->stack8)
			&& ((int)temp->content > push->stack2))
		{
			current = (int)temp->content;
			temp = *stb;
			while ((int)temp->content != current)
			{
				split_helper(sta, stb, result, current);
				temp = *stb;
			}
			psw_pa(sta, stb, result);
			temp = *stb;
		}
	}
}

void	free_lists(t_list *sta, t_list *result, t_list *stemp)
{
	t_list	*temp;

	while (sta)
	{
		temp = sta;
		sta = sta->next;
		free (temp);
	}
	if (!result)
		exit (0);
	while (result)
	{
		temp = result;
		result = result->next;
		free (temp);
	}
	while (stemp)
	{
		temp = stemp;
		stemp = stemp->next;
		free (temp);
	}
}
