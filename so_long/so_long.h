/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 18:25:02 by umartin-          #+#    #+#             */
/*   Updated: 2022/02/08 16:33:14 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "../mlx/mlx.h"
# include "../libft/libft.h"
# include <stdio.h>
# include <fcntl.h>

typedef struct s_game
{
	void	*mlx;
	void	*win;
	char	**map;
	void	*img_back;
	void	*img_wall;
	void	*img_player;
	void	*img_item;
	void	*img_exit;
	int		moves;
	int		n_items;
	int		n_player;
	int		n_exit;
	int		win_x;
	int		win_y;
	int		end;

}	t_game;

char	**ft_read_map(char **map);
int		ft_map_validator(t_game *game);
int		ft_is_rectangular(char **map);
int		ft_01cep(char **map);
int		ft_walls(char **map);
int		ft_at_least(t_game *game);

#endif