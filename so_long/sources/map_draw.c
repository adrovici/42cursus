/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_draw.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 17:15:25 by umartin-          #+#    #+#             */
/*   Updated: 2022/02/11 16:36:00 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	player_draw(t_game *game, int x, int y)
{
	game->player_x = x;
	game->player_y = y;
	mlx_put_image_to_window
		(game->mlx, game->win, game->img_player_s, x * 64, y * 64);
}

void	img_draw(t_game *game, void *image, int x, int y)
{
	mlx_put_image_to_window
		(game->mlx, game->win, image, x * 64, y * 64);
}

void	map_draw(t_game *game)
{
	int	x;
	int	y;

	y = 0;
	while (game->map[y] != NULL)
	{
		x = 0;
		while (game->map[y][x] != '\0')
		{
			if (game->map[y][x] == '1')
				img_draw(game, game->img_wall, x, y);
			if (game->map[y][x] == '0')
				img_draw(game, game->img_back, x, y);
			if (game->map[y][x] == 'P')
				player_draw(game, x, y);
			if (game->map[y][x] == 'E')
				img_draw(game, game->img_exit, x, y);
			if (game->map[y][x] == 'C')
				img_draw(game, game->img_item, x, y);
			x++;
		}
		y++;
	}
}
