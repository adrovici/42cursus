/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_validator_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 15:15:35 by umartin-          #+#    #+#             */
/*   Updated: 2022/02/11 18:18:47 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	ft_is_rectangular(char **map)
{
	int	i;

	i = 0;
	if (!map)
		return (0);
	while (map[i] != NULL)
	{
		if (ft_strlen(map[i]) != ft_strlen(map[0]))
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
	while (map[i] != NULL)
	{
		j = 0;
		while (map[i][j] != '\0')
		{
			if (map[i][j] != '1' && map[i][j] != '0' && map[i][j] != 'C'
						&& map[i][j] != 'E' && map[i][j] != 'P'
							&& map[i][j] != 'K')
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
	while (map[n] != NULL)
		n++;
	n = n - 1;
	l = ft_strlen(map[0]);
	l = l - 1;
	i = 0;
	while (map[0][i])
	{
		if (map[0][i] != '1' && map[n][i] != '1')
			return (0);
		i++;
	}
	i = 0;
	while (i != (n + 1))
	{
		if (map[i][0] != '1' || map[i][l] != '1')
			return (0);
		i++;
	}
	return (1);
}

int	ft_at_least(t_game *game)
{
	int	i;
	int	j;

	i = 0;
	game->n_exit = 0;
	game->n_items = 0;
	game->n_player = 0;
	while (game->map[i])
	{
		j = 0;
		while (game->map[i][j] != '\0')
		{
			if (game->map[i][j] == 'C')
				game->n_items++;
			if (game->map[i][j] == 'E')
				game->n_exit++;
			if (game->map[i][j] == 'P')
				game->n_player++;
			j++;
		}
		i++;
	}
	if (game->n_items == 0 || game->n_exit != 1 || game->n_player != 1)
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
