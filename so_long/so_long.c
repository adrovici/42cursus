/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 18:09:53 by umartin-          #+#    #+#             */
/*   Updated: 2022/02/08 15:43:21 by umartin-         ###   ########.fr       */
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
		printf("no válido");
		exit(1);
	}
	else
		printf("mapa valido mi rey");
	return (0);
}
