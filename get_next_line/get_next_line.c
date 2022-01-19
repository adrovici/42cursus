/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 16:35:40 by umartin-          #+#    #+#             */
/*   Updated: 2022/01/19 12:15:07 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char	buffer;
	char	rtn[999999];
	int		x;
	int		i;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	i = 0;
	x = read(fd, &buffer, 1);
	while (x > 0)
	{
		rtn[i++] = buffer;
		if (buffer == '\n')
			break ;
		x = read(fd, &buffer, 1);
	}
	rtn[i] = 0;
	if (x <= 0 && i == 0)
		return (0);
	return (ft_strdup(rtn));
}
