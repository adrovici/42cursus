/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_events.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 12:16:28 by umartin-          #+#    #+#             */
/*   Updated: 2022/02/16 15:29:49 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	game_events(int keycode, t_game *game)
{
	if (keycode == KEY_W)
	{
		w_key(game);
	}
	if (keycode == KEY_A)
	{
		a_key(game);
	}
	if (keycode == KEY_S)
	{
		s_key(game);
	}
	if (keycode == KEY_D)
	{
		d_key(game);
	}
}

void	player_w_move(t_game *game)
{
	img_draw(game, game->img_back, game->player_x, game->player_y);
	game->player_y = game->player_y - 1;
	img_draw(game, game->img_player_w, game->player_x, game->player_y);
}

void	player_a_move(t_game *game)
{
	img_draw(game, game->img_back, game->player_x, game->player_y);
	game->player_x = game->player_x - 1;
	img_draw(game, game->img_player_a, game->player_x, game->player_y);
}

void	player_s_move(t_game *game)
{
	img_draw(game, game->img_back, game->player_x, game->player_y);
	game->player_y = game->player_y + 1;
	img_draw(game, game->img_player_s, game->player_x, game->player_y);
}

void	player_d_move(t_game *game)
{
	img_draw(game, game->img_back, game->player_x, game->player_y);
	game->player_x = game->player_x + 1;
	img_draw(game, game->img_player_d, game->player_x, game->player_y);
}
