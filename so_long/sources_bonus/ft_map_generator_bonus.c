/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_generator_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 13:05:52 by umartin-          #+#    #+#             */
/*   Updated: 2022/02/11 18:15:35 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	map_size(t_game *game)
{
	int	i;

	game->win_x = ft_strlen(game->map[0]) * 64;
	i = 0;
	while (game->map[i] != NULL)
		i++;
	game->win_y = i * 64;
}

void	image_generator(t_game *game)
{
	game->img_back = mlx_xpm_file_to_image
		(game->mlx, "assets/images/0.xpm", &game->i, &game->i);
	game->img_wall = mlx_xpm_file_to_image
		(game->mlx, "assets/images/1.xpm", &game->i, &game->i);
	game->img_item = mlx_xpm_file_to_image
		(game->mlx, "assets/images/item_00.xpm", &game->i, &game->i);
	game->img_exit = mlx_xpm_file_to_image
		(game->mlx, "assets/images/exit_off.xpm", &game->i, &game->i);
	game->img_enemy = mlx_xpm_file_to_image
		(game->mlx, "assets/images/enemy_00.xpm", &game->i, &game->i);
}

void	structure_generator(t_game *game)
{
	game->i = 64;
	game->taken = 0;
	game->moves = 0;
	game->loop = 0;
	game->finish = 0;
	game->counter = 4;
	game->dead = 0;
}

void	player_generator(t_game *game)
{
	game->img_player_w = mlx_xpm_file_to_image
		(game->mlx, "assets/images/player_w.xpm", &game->i, &game->i);
	game->img_player_a = mlx_xpm_file_to_image
		(game->mlx, "assets/images/player_a.xpm", &game->i, &game->i);
	game->img_player_s = mlx_xpm_file_to_image
		(game->mlx, "assets/images/player_s.xpm", &game->i, &game->i);
	game->img_player_d = mlx_xpm_file_to_image
		(game->mlx, "assets/images/player_d.xpm", &game->i, &game->i);
}

void	map_generator(t_game *game)
{
	game->mlx = mlx_init();
	map_size (game);
	image_generator (game);
	game->win = mlx_new_window(game->mlx, game->win_x, game->win_y, "so_long");
	game->moves = 0;
	game->end = 0;
	image_generator(game);
	structure_generator(game);
	player_generator(game);
	map_draw(game);
}
