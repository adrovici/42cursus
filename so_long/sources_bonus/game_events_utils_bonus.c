/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_events_utils_bonus.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 15:20:58 by umartin-          #+#    #+#             */
/*   Updated: 2022/02/16 15:35:06 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	w_key(t_game *game)
{
	if ((game->map[game->player_y - 1][game->player_x] != '1') &&
				(game->map[game->player_y - 1][game->player_x] != 'E'))
		movement(game);
	player_w(game);
}

void	a_key(t_game *game)
{
	if ((game->map[game->player_y][game->player_x - 1] != '1') &&
				(game->map[game->player_y][game->player_x - 1] != 'E'))
		movement(game);
	player_a(game);
}

void	s_key(t_game *game)
{
	if ((game->map[game->player_y + 1][game->player_x] != '1') &&
				(game->map[game->player_y + 1][game->player_x] != 'E'))
		movement(game);
	player_s(game);
}

void	d_key(t_game *game)
{
	if ((game->map[game->player_y][game->player_x + 1] != '1') &&
				(game->map[game->player_y][game->player_x + 1] != 'E'))
		movement(game);
	player_d(game);
}
