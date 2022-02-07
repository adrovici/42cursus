/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 12:45:45 by umartin-          #+#    #+#             */
/*   Updated: 2022/01/27 12:11:40 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_final_rtn(char *final)
{
	char	*str;
	int		i;

	i = 0;
	if (!final[i])
		return (NULL);
	while (final[i] && final[i] != '\n')
		i++;
	str = (char *)malloc(sizeof(char) * (i + 2));
	if (!str)
		return (NULL);
	i = 0;
	while (final[i] && final[i] != '\n')
	{
		str[i] = final[i];
		i++;
	}
	if (final[i] == '\n')
	{
		str[i] = final[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_clean_final(char *final)
{
	char	*str;
	int		i;
	int		c;

	i = 0;
	while (final[i] && final[i] != '\n')
		i++;
	if (!final[i])
	{
		free (final);
		return (NULL);
	}
	str = (char *)malloc(sizeof(char) * (ft_strlen(final) - i + 1));
	if (!str)
		return (NULL);
	i++;
	c = 0;
	while (final[i])
		str[c++] = final[i++];
	str[c] = '\0';
	free (final);
	return (str);
}

char	*ft_read_static(int fd, char *final)
{
	char	*rd;
	int		i;

	rd = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!rd)
		return (NULL);
	i = 1;
	while (!ft_strchr(final, '\n') && i != 0)
	{
		i = read(fd, rd, BUFFER_SIZE);
		if (i == -1)
		{
			free(rd);
			return (NULL);
		}
		rd[i] = '\0';
		final = ft_strjoin(final, rd);
	}
	free (rd);
	return (final);
}

char	*get_next_line(int fd)
{
	char		*rtn;
	static char	*final[4096];

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	final[fd] = ft_read_static(fd, final[fd]);
	if (!final[fd])
		return (NULL);
	rtn = ft_final_rtn(final[fd]);
	final[fd] = ft_clean_final(final[fd]);
	return (rtn);
}
