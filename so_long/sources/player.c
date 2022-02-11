/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 12:40:30 by umartin-          #+#    #+#             */
/*   Updated: 2022/02/11 16:08:42 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	player_w(t_game *game)
{
	if (game->map[game->player_y - 1][game->player_x] == '1')
		return ;
	else if (game->map[game->player_y - 1][game->player_x] == 'C')
	{
		game->taken++;
		if (game->taken == game->n_items)
			game->finish = 1;
		game->map[game->player_y - 1][game->player_x] = '0';
		player_w_move(game);
	}
	else if (game->map[game->player_y - 1][game->player_x] == 'E')
	{
		if (game->taken != game->n_items)
			portal_message(game);
		else
			exit (0);
	}
	else
		player_w_move(game);
}

void	player_a(t_game *game)
{
	if (game->map[game->player_y][game->player_x - 1] == '1')
		return ;
	else if (game->map[game->player_y][game->player_x - 1] == 'C')
	{
		game->taken++;
		if (game->taken == game->n_items)
			game->finish = 1;
		game->map[game->player_y][game->player_x - 1] = '0';
		player_a_move(game);
	}
	else if (game->map[game->player_y][game->player_x - 1] == 'E')
	{
		if (game->taken != game->n_items)
			portal_message(game);
		else
			exit (0);
	}
	else
		player_a_move(game);
}

void	player_s(t_game *game)
{
	if (game->map[game->player_y + 1][game->player_x] == '1')
		return ;
	else if (game->map[game->player_y + 1][game->player_x] == 'C')
	{
		game->taken++;
		if (game->taken == game->n_items)
			game->finish = 1;
		game->map[game->player_y + 1][game->player_x] = '0';
		player_s_move(game);
	}
	else if (game->map[game->player_y + 1][game->player_x] == 'E')
	{
		if (game->taken != game->n_items)
			portal_message(game);
		else
			exit (0);
	}
	else
		player_s_move(game);
}

void	player_d(t_game *game)
{
	if (game->map[game->player_y][game->player_x + 1] == '1')
		return ;
	else if (game->map[game->player_y][game->player_x + 1] == 'C')
	{
		game->taken++;
		if (game->taken == game->n_items)
			game->finish = 1;
		game->map[game->player_y][game->player_x + 1] = '0';
		player_d_move(game);
	}
	else if (game->map[game->player_y][game->player_x + 1] == 'E')
	{
		if (game->taken != game->n_items)
			portal_message(game);
		else
			exit (0);
	}
	else
		player_d_move(game);
}
