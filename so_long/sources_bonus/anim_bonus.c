/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   anim_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 18:10:15 by umartin-          #+#    #+#             */
/*   Updated: 2022/02/14 21:23:07 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	anim(t_game *game)
{
	if (game->loop < 1000)
	{
		game->loop++;
		return (0);
	}
	if (game->finish == 0)
		item_anim(game);
	else if (game->finish == 1)
		full_anim(game);
	return (0);
}

int	full_anim(t_game *game)
{
	game->loop = 0;
	if (game->counter == 4)
		full_anim_frame_00(game);
	else if (game->counter == 3)
		full_anim_frame_01(game);
	else if (game->counter == 2)
		full_anim_frame_02(game);
	else if (game->counter == 1)
	{
		full_anim_frame_03(game);
		game->counter = 5;
	}
	enemy_draw(game);
	exit_draw(game);
	game->counter--;
	return (0);
}

int	item_anim(t_game *game)
{
	game->loop = 0;
	if (game->counter == 4)
		part_anim_frame_00(game);
	else if (game->counter == 3)
		part_anim_frame_01(game);
	else if (game->counter == 2)
		part_anim_frame_02(game);
	else if (game->counter == 1)
	{
		part_anim_frame_03(game);
		game->counter = 5;
	}
	enemy_draw(game);
	item_draw(game);
	game->counter--;
	return (0);
}
