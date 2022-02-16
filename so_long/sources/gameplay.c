/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gameplay.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:27:08 by umartin-          #+#    #+#             */
/*   Updated: 2022/02/16 15:26:01 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_close(t_game *game)
{
	mlx_destroy_window(game->mlx, game->win);
	exit (0);
	return (0);
}

int	ft_keypress(int keycode, t_game *game)
{
	if (keycode == KEY_ESC)
	{
		mlx_destroy_window(game->mlx, game->win);
		exit(0);
	}
	else if (!game->end)
		game_events(keycode, game);
	return (0);
}

void	gameplay(t_game *game)
{
	mlx_hook(game->win, 2, 1L << 0, ft_keypress, game);
	mlx_hook(game->win, 17, 1L << 17, ft_close, game);
}

void	movement(t_game *game)
{
	game->moves++;
	printf("MOVES %d\n", game->moves);
}

void	portal_message(t_game *game)
{
	printf("NOT ENOUGH POWER!!\n");
}
