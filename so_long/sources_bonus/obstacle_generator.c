/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   obstacle_generator.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 21:26:42 by umartin-          #+#    #+#             */
/*   Updated: 2022/02/14 22:16:54 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	obstacle_checker(t_game *game, int i, int j)
{
	int	a;

	if (game->map[i + 1][j] && !game->map[i][j + 1] &&
			!game->map[i - 1][j] && !game->map[i][j - 1])
	{
		a = rand() % 3;
		if (a == 1)
			game->img_wall = mlx_xpm_file_to_image
				(game->mlx, "assets/images/obs_00.xpm", &game->i, &game->i);
		else
			game->img_wall = mlx_xpm_file_to_image
				(game->mlx, "assets/images/obs_01.xpm", &game->i, &game->i);
	}
}
