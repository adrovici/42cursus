/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_validator.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 15:15:35 by umartin-          #+#    #+#             */
/*   Updated: 2022/02/07 12:58:22 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_is_rectangular(char **map)
{
	int	i;

	i = 0;
	while (map[i])
	{
		if (ft_strlen(map[i]) == ft_strlen(map[0]))
			continue ;
		else
			return (0);
		i++;
	}
	return (1);
}

int	ft_01cep(char **map)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (map[i])
	{
		while (map[i][j] != '\n')
		{
			if (map[i][j] != "1" || map[i][j] != "0" || map[i][j] != "C"
						|| map[i][j] != "E" || map[i][j] != "P")
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_walls(char **map)
{
	int	i;
	int	l;
	int	n;

	n = 0;
	while (map[n])
		n++;
	l = ft_strlen(map[0]);
	i = 0;
	while (map[0][i])
	{
		if (map[0][i] != "1" && map[n][i] != "1")
			return (0);
		i++;
	}
	i = 0;
	while (i == l)
	{
		if (map[i][0] != "1" || map[i][l] != "1")
			return (0);
		i++;
	}
}

int	ft_at_least(t_game *game)
{
	int	i;
	int	j;

	i = -1;
	j = -1;
	game->n_exit = 0;
	game->n_items = 0;
	game->n_player = 0;
	while (game->map[++i])
	{
		while (game->map[i][++j] != '\n')
		{
			if (game->map[i][j] == "C")
				game->n_items;
			if (game->map[i][j] == "E")
				game->n_exit++;
			if (game->map[i][j] == "P")
				game->n_player;
		}
	}
	if (game->n_items == 0 || game->n_exit == 0 || game->n_player == 0)
		return (0);
	return (1);
}

int	ft_map_validator(t_game *game)
{
	if (ft_is_rectangular(game->map) && ft_01cep(game->map)
		&& ft_walls(game->map) && ft_at_least(game))
		return (1);
	return (0);
}
