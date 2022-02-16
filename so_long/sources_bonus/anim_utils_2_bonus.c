/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   anim_utils_2_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 20:09:35 by umartin-          #+#    #+#             */
/*   Updated: 2022/02/16 12:45:57 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	part_anim_frame_00(t_game *game)
{
	game->img_item = mlx_xpm_file_to_image
		(game->mlx, "images/item_00.xpm", &game->i, &game->i);
	game->img_enemy = mlx_xpm_file_to_image
		(game->mlx, "images/enemy_00.xpm", &game->i, &game->i);
}

void	part_anim_frame_01(t_game *game)
{
	game->img_item = mlx_xpm_file_to_image
		(game->mlx, "images/item_01.xpm", &game->i, &game->i);
	game->img_enemy = mlx_xpm_file_to_image
		(game->mlx, "images/enemy_01.xpm", &game->i, &game->i);
}

void	part_anim_frame_02(t_game *game)
{
	game->img_item = mlx_xpm_file_to_image
		(game->mlx, "images/item_02.xpm", &game->i, &game->i);
	game->img_enemy = mlx_xpm_file_to_image
		(game->mlx, "images/enemy_02.xpm", &game->i, &game->i);
}

void	part_anim_frame_03(t_game *game)
{
	game->img_item = mlx_xpm_file_to_image
		(game->mlx, "images/item_03.xpm", &game->i, &game->i);
	game->img_enemy = mlx_xpm_file_to_image
		(game->mlx, "images/enemy_03.xpm", &game->i, &game->i);
}
