/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   anim.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 18:10:15 by umartin-          #+#    #+#             */
/*   Updated: 2022/02/11 13:51:07 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	anim(t_game *game)
{
	if (game->loop < 1000)
	{
		game->loop++;
		return (0);
	}
	if (game->finish == 0)
	{
		item_anim(game);
	}
	else if (game->finish == 1)
		all_anim(game);
	return (0);
}

int	all_anim(t_game *game)
{
	if (game->loop < 1000)
	{
		game->loop++;
		return (0);
	}
	game->loop = 0;
	if (game->counter == 4)
		game->img_exit = mlx_xpm_file_to_image
			(game->mlx, "assets/images/exit_00.xpm", &game->i, &game->i);
	else if (game->counter == 3)
		game->img_exit = mlx_xpm_file_to_image
			(game->mlx, "assets/images/exit_01.xpm", &game->i, &game->i);
	else if (game->counter == 2)
		game->img_exit = mlx_xpm_file_to_image
			(game->mlx, "assets/images/exit_02.xpm", &game->i, &game->i);
	else if (game->counter == 1)
	{
		game->img_exit = mlx_xpm_file_to_image
			(game->mlx, "assets/images/exit_03.xpm", &game->i, &game->i);
		game->counter = 5;
	}
	item_draw(game);
	exit_draw(game);
	game->counter--;
	return (0);
}

int	item_anim(t_game *game)
{
	if (game->loop < 1000)
	{
		game->loop++;
		return (0);
	}
	game->loop = 0;
	if (game->counter == 4)
		game->img_item = mlx_xpm_file_to_image
			(game->mlx, "assets/images/item_00.xpm", &game->i, &game->i);
	else if (game->counter == 3)
		game->img_item = mlx_xpm_file_to_image
			(game->mlx, "assets/images/item_01.xpm", &game->i, &game->i);
	else if (game->counter == 2)
		game->img_item = mlx_xpm_file_to_image
			(game->mlx, "assets/images/item_02.xpm", &game->i, &game->i);
	else if (game->counter == 1)
	{
		game->img_item = mlx_xpm_file_to_image
			(game->mlx, "assets/images/item_03.xpm", &game->i, &game->i);
		game->counter = 5;
	}
	item_draw(game);
	game->counter--;
	return (0);
}
