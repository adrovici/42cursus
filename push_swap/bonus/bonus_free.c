/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_free.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 12:11:37 by umartin-          #+#    #+#             */
/*   Updated: 2022/04/12 17:06:31 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

void	chk_free_lists(t_list *sta, t_list *stb)
{
	chk_list_free(sta);
	chk_list_free(stb);
}

void	chk_list_free(t_list *st)
{
	t_list	*temp;

	if (!st || st == NULL)
		return ;
	while (st)
	{
		temp = st;
		st = st->next;
		free (temp);
	}
}

int	chk_at_least_one_num(char *str)
{
	int	i;
	int	c;

	i = -1;
	c = 0;
	if ((!str) || str[0] == '\0')
		exit(0);
	while (str[++i] != '\0')
	{
		if ((str[i] >= 48) && (str[i] <= 57))
			c++;
	}
	if (c == 0)
		return (0);
	else if (c > 0)
		return (1);
	return (0);
}
