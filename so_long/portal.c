/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   portal.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:28:50 by umartin-          #+#    #+#             */
/*   Updated: 2022/02/10 18:04:54 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	portal(t_game *game)
{
	int	i;
	int	j;

	i = 64;
	j = 5;
	while (game->anim != 1)
	{
		if (j == 5)
			game->img_exit = mlx_xpm_file_to_image
				(game->mlx, "assets/images/exit_00.xpm", &i, &i);
		else if (j == 4)
			game->img_exit = mlx_xpm_file_to_image
				(game->mlx, "assets/images/exit_01.xpm", &i, &i);
		else if (j == 3)
			game->img_exit = mlx_xpm_file_to_image
				(game->mlx, "assets/images/exit_02.xpm", &i, &i);
		else if (j == 2)
			game->img_exit = mlx_xpm_file_to_image
				(game->mlx, "assets/images/exit_03.xpm", &i, &i);
		if (j == 1)
			j = 6;
		sleep (1);
		j--;
	}
}
