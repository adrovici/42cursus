/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 12:40:30 by umartin-          #+#    #+#             */
/*   Updated: 2022/02/16 15:37:21 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

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
		if (game->taken == game->n_items)
			exit (0);
	}
	else if (game->map[game->player_y - 1][game->player_x] == 'K')
		player_dead(game);
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
		if (game->taken == game->n_items)
			exit (0);
	}
	else if (game->map[game->player_y][game->player_x - 1] == 'K')
		player_dead(game);
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
		if (game->taken == game->n_items)
			exit (0);
	}
	else if (game->map[game->player_y + 1][game->player_x] == 'K')
		player_dead(game);
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
		if (game->taken == game->n_items)
			exit (0);
	}
	else if (game->map[game->player_y][game->player_x + 1] == 'K')
		player_dead(game);
	else
		player_d_move(game);
}

void	player_dead(t_game *game)
{
	game->dead = 1;
	game->img_player_w = mlx_xpm_file_to_image
		(game->mlx, "images/player_dead.xpm", &game->i, &game->i);
	game->img_player_a = mlx_xpm_file_to_image
		(game->mlx, "images/player_dead.xpm", &game->i, &game->i);
	game->img_player_s = mlx_xpm_file_to_image
		(game->mlx, "images/player_dead.xpm", &game->i, &game->i);
	game->img_player_d = mlx_xpm_file_to_image
		(game->mlx, "images/player_dead.xpm", &game->i, &game->i);
	player_draw(game, game->player_x, game->player_y);
}
