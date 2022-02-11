/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_events.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 12:16:28 by umartin-          #+#    #+#             */
/*   Updated: 2022/02/11 16:02:19 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	game_events(int keycode, t_game *game)
{
	if (keycode == KEY_W)
	{
		player_w(game);
		if (game->map[game->player_y - 1][game->player_x] != '1')
			movement(game);
	}
	if (keycode == KEY_A)
	{
		player_a(game);
		if (game->map[game->player_y][game->player_x - 1] != '1')
			movement(game);
	}
	if (keycode == KEY_S)
	{
		player_s(game);
		if (game->map[game->player_y + 1][game->player_x] != '1')
			movement(game);
	}
	if (keycode == KEY_D)
	{
		player_d(game);
		if (game->map[game->player_y][game->player_x + 1] != '1')
			movement(game);
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
