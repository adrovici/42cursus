/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_of_the_mandangon.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 18:21:56 by umartin-          #+#    #+#             */
/*   Updated: 2022/03/16 18:12:35 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	algorithm_of_the_mandangon(t_list **sta, t_list **stb)
{
	t_list	*temp;
	int		current;
	int		i;
	int		cla;

	temp = *sta;
	while (ft_lstsize(temp) > 20)
	{
		cla = cla_finder(sta);
		i = 0;
		while (i < 20)
		{
			current = current_finder(sta, cla);
			while ((int)temp->content != current)
			{
				if (r_or_rr(sta, current))
					psw_rra(sta);
				else
					psw_ra(sta);
				temp = *sta;
			}
			temp = *stb;
			printf ("una me habla malo, y la otra me dice que me quiere %i\n", ft_lstsize(temp));
			imprimir(sta, stb);
			if ((ft_lstsize(temp) == 0) || (ft_lstsize(temp) == 1)
				|| (ft_lstsize(temp) == 2))
				psw_pb(sta, stb);
			else if (ft_lstsize(temp) == 3)
				i_case_3(stb);
			else
				case_b(sta, stb, current);
			temp = *sta;
			i++;
		}
	temp = *sta;
	}
}

int	r_or_rr(t_list **sta, int current)
{
	t_list	*temp;
	int		i;

	temp = *sta;
	i = 0;
	while (temp)
	{
		if (temp->content == current)
			break ;
		temp = temp->next;
		i++;
	}
	temp = *sta;
	if (i > ft_lstsize(temp) / 2)
		return (1);
	else
		return (0);
}

int	r_or_rr_b(t_list **stb, int current)
{
	t_list	*tempb;
	int		i;

	printf("MARICON\n");
	tempb = *stb;
	i = 0;
	while (tempb)
	{
		if (tempb->content == current)
			break ;
		tempb = tempb->next;
		i++;
	}
	tempb = *stb;
	if (i > ft_lstsize(tempb) / 2)
		return (1);
	else
		return (0);
}

int	current_checker(t_list **sta, int cla)
{
	t_list	*temp;

	temp = *sta;
	while (temp)
	{
		if (temp->content < cla)
			return (0);
	}
	return (1);
}

int	cla_finder(t_list	**sta)
{
	t_list	*temp;
	int		i;
	int		min;
	int		cla;

	i = 0;
	min = min_num_finder(sta);
	cla = next_min_num(sta, min);
	while (i++ < 18)
		cla = next_min_num(sta, cla);
	return (cla);
}
