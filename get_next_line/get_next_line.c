/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 16:35:40 by umartin-          #+#    #+#             */
/*   Updated: 2022/01/25 20:15:58 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_final_rtn(char *final)
{
	char	*str;
	int		i;

	i = 0;
	if (!final[i])
		return (NULL);
	while (final[i] && final[i] != '\n')
		i++;
	str = (char *)malloc(sizeof(char) * (i + 1));
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
	static char	*final;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	final = ft_read_static(fd, final);
	if (!final)
		return (NULL);
	rtn = ft_final_rtn(final);
	final = ft_clean_final(final);
	return (rtn);
}

/*int	main(void)
{
	char	*line;
	int		i;
	int		fd1;

	fd1 = open("test.txt", O_RDONLY);
	i = 1;
	while (i < 7)
	{
		line = get_next_line(fd1);
		printf("line [%02d]: %s", i, line);
		free(line);
		i++;
	}
	close(fd1);
	return (0);
}*/
