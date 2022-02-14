/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   anim_utils_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 19:33:58 by umartin-          #+#    #+#             */
/*   Updated: 2022/02/14 21:21:04 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	full_anim_frame_00(t_game *game)
{
	game->img_exit = mlx_xpm_file_to_image
		(game->mlx, "assets/images/exit_00.xpm", &game->i, &game->i);
	game->img_enemy = mlx_xpm_file_to_image
		(game->mlx, "assets/images/enemy_00.xpm", &game->i, &game->i);
	printf("Entra\n");
}

void	full_anim_frame_01(t_game *game)
{
	game->img_exit = mlx_xpm_file_to_image
		(game->mlx, "assets/images/exit_01.xpm", &game->i, &game->i);
	game->img_enemy = mlx_xpm_file_to_image
		(game->mlx, "assets/images/enemy_01.xpm", &game->i, &game->i);
}

void	full_anim_frame_02(t_game *game)
{
	game->img_exit = mlx_xpm_file_to_image
		(game->mlx, "assets/images/exit_02.xpm", &game->i, &game->i);
	game->img_enemy = mlx_xpm_file_to_image
		(game->mlx, "assets/images/enemy_02.xpm", &game->i, &game->i);
}

void	full_anim_frame_03(t_game *game)
{
	game->img_exit = mlx_xpm_file_to_image
		(game->mlx, "assets/images/exit_03.xpm", &game->i, &game->i);
	game->img_enemy = mlx_xpm_file_to_image
		(game->mlx, "assets/images/enemy_03.xpm", &game->i, &game->i);
}
