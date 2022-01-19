/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 15:10:18 by umartin-          #+#    #+#             */
/*   Updated: 2022/01/18 16:21:39 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strdup(const char *s)
{
	char	*result;
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (s[len] != '\0')
		len++;
	result = malloc(sizeof(*s) * len + 1);
	if (result == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		result[i] = s[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
