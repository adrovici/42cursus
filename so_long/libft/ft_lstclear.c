/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 12:28:49 by umartin-          #+#    #+#             */
/*   Updated: 2021/11/15 12:36:19 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	temp = *lst;
	if (!lst)
		return ;
	else
	{
		while ((*lst) != NULL)
		{
			temp = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = temp;
		}
	}
	lst = NULL;
}
