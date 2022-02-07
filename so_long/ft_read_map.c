/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 12:30:40 by umartin-          #+#    #+#             */
/*   Updated: 2022/02/03 13:55:37 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	**ft_read_map(char *map)
{
	int		fd;
	char	*line;
	char	*temp;
	char	*temp_map;
	char	**map;

	fd = open(map, O_RDONLY);
	if (fd == -1)
		return (NULL);
	temp_map = ft_strdup("");
	while (1)
	{
		line = get_next_line(fd);
		if (!line)
			break ;
		temp = temp_map;
		temp_map = ft_strjoin(temp, line);
		free(line);
		free(temp);
	}
	map = ft_split(temp_map, '\n');
	free(temp_map);
	return (map);
}
