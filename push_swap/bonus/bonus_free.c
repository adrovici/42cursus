/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_free.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 12:11:37 by umartin-          #+#    #+#             */
/*   Updated: 2022/04/12 12:43:50 by umartin-         ###   ########.fr       */
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
