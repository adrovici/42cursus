/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   obstacle_generator.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 21:26:42 by umartin-          #+#    #+#             */
/*   Updated: 2022/02/16 12:42:15 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

#include "so_long_bonus.h"

void	wall_draw(t_game *game)
{
	int	i;

	game->map_n = 0;
	while (game->map[game->map_n] != NULL)
		game->map_n++;
	game->map_n = game->map_n - 1;
	game->map_l = ft_strlen(game->map[0]) - 1;
	i = 0;
	game->img_wall = mlx_xpm_file_to_image
		(game->mlx, "images/1.xpm", &game->i, &game->i);
	while (game->map[0][i])
	{
		img_draw(game, game->img_wall, i, 0);
		img_draw(game, game->img_wall, i, game->map_n);
		i++;
	}
	i = 0;
	while (i < game->map_n)
	{
		img_draw(game, game->img_wall, game->map_l, i);
		img_draw(game, game->img_wall, 0, i);
		i++;
	}
}

void	obstacle_draw(t_game *game)
{
	int	x;
	int	y;

	y = 1;
	while (y < game->map_n)
	{
		x = 1;
		while (x < game->map_l)
		{
			if (game->map[y][x] == '1')
			{
				obstacle_rand(game);
				img_draw(game, game->img_wall, x, y);
			}
			x++;
		}
	y++;
	}
}

void	obstacle_rand(t_game *game)
{
	int	i;

	i = rand() % 4;
	if (i == 0)
	game->img_wall = mlx_xpm_file_to_image
			(game->mlx, "images/obs_00.xpm", &game->i, &game->i);
	else if (i == 1)
		game->img_wall = mlx_xpm_file_to_image
			(game->mlx, "images/obs_01.xpm", &game->i, &game->i);
	else if (i == 2)
		game->img_wall = mlx_xpm_file_to_image
			(game->mlx, "images/obs_02.xpm", &game->i, &game->i);
	else if (i == 3)
		game->img_wall = mlx_xpm_file_to_image
			(game->mlx, "images/obs_03.xpm", &game->i, &game->i);
}
