/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 18:09:53 by umartin-          #+#    #+#             */
/*   Updated: 2022/02/16 14:47:04 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char **argv)
{
	t_game	game;
	int		check;

	if (argc != 2)
		exit(1);
	game.map = ft_read_map(&argv[1]);
	if (!game.map)
		exit(1);
	check = ft_map_validator(&game);
	if (check == 0)
	{
		printf("map not valid");
		exit(1);
	}
	map_generator(&game);
	gameplay(&game);
	mlx_loop(game.mlx);
	return (0);
}
