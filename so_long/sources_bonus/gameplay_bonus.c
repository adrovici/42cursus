/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gameplay_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:27:08 by umartin-          #+#    #+#             */
/*   Updated: 2022/02/16 15:37:46 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

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
	{
		if (game->dead == 0)
			game_events(keycode, game);
		else
		{
			img_draw(game, game->el_haki, 0, game->map_n + 1.35);
			mlx_string_put(game->mlx, game->win, 10,
				(game->map_n + 1.35) * 64, 0xFFFFFF, "GAME OVER");
		}
	}
	return (0);
}

void	gameplay(t_game *game)
{
	mlx_hook(game->win, 2, 1L << 0, ft_keypress, game);
	mlx_hook(game->win, 17, 1L << 17, ft_close, game);
}

void	movement(t_game *game)
{
	char	*str;

	game->moves++;
	str = ft_itoa(game->moves);
	img_draw(game, game->el_haki, 0, game->map_n + 1.35);
	mlx_string_put(game->mlx, game->win, 10,
		(game->map_n + 1.35) * 64, 0xFFFFFF, "MOVES: ");
	mlx_string_put(game->mlx, game->win, 60,
		(game->map_n + 1.35) * 64, 0xFFFFFF, str);
}
