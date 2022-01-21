/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 16:35:40 by umartin-          #+#    #+#             */
/*   Updated: 2022/01/21 16:14:02 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*temp;
	char		*rd;
	char		*rd_t;
	char		*final;
	char		*rtn;
	int			i;
	int			c;
	int			h;
	int			pos;
	int			z;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	i = BUFFER_SIZE;
	while (i == BUFFER_SIZE && !ft_strchrt(rd, '\n'))
	{
		i = read(fd, rd_t, BUFFER_SIZE);
		final = ft_strjoin(rd, rd_t);
		free (rd);
		free (rd_t);
		rd = final;
	}
	c = ft_finallen(final);
	h = ft_strlen(final);
	pos = c + (h - c);
	z = 0;
	while (z <= pos)
	{
		rtn[z] = final[z];
		z++;
	}
	z = 0;
	while (pos + 1 <= h)
	{
		temp[z] = final[pos + 1];
		pos++;
		z++;
	}
}
