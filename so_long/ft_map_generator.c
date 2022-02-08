/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_generator.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 13:05:52 by umartin-          #+#    #+#             */
/*   Updated: 2022/02/08 16:34:34 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	map_size(t_game *game)
{
	int	i;

	game->win_x = ft_strlen(game->map[0]) * 32;
	i = 0;
	while (game->map[i] != NULL)
		i++;
	game->win_y = i * 32;
}

static void	image_generator(t_game *game)
{
	game->img_back = mlx_xpm_file_to_image
		(game->mlx, "assets/images/0.xpm", &game->win_x, &game->win_y);
	game->img_wall = mlx_xpm_file_to_image
		(game->mlx, "assets/images/1.xpm", &game->win_x, &game->win_y);
	game->img_player = mlx_xpm_file_to_image
		(game->mlx, "assets/images/player.xpm", &game->win_x, &game->win_y);
	game->img_item = mlx_xpm_file_to_image
		(game->mlx, "assets/images/C.xpm", &game->win_x, &game->win_y);
	game->img_exit = mlx_xpm_file_to_image
		(game->mlx, "assets/images/exit.xpm", &game->win_x, &game->win_y);
}

static void	map_generator(t_game *game)
{
	game->mlx = mlx_init();
	image_generator (game);
	game->win = mlx_new_window(game->mlx, game->win_x, game->win_y, "so_long");
	game->moves = 0;
	game->end = 0;
	image_generator(game);
	map_draw(game);
}
