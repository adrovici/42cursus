/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 18:25:02 by umartin-          #+#    #+#             */
/*   Updated: 2022/02/16 15:23:33 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "../mlx/mlx.h"
# include "../libft/libft.h"
# include <stdio.h>
# include <fcntl.h>
# include <stdlib.h>

# define KEY_ESC 53
# define KEY_W 13
# define KEY_A 0
# define KEY_S 1
# define KEY_D 2

typedef struct s_game
{
	void	*mlx;
	void	*win;
	char	**map;
	void	*img_back;
	void	*img_wall;
	void	*img_player_w;
	void	*img_player_a;
	void	*img_player_s;
	void	*img_player_d;
	void	*img_item;
	void	*img_exit;
	void	*img_exit_00;
	void	*img_exit_01;
	void	*img_exit_02;
	void	*img_exit_03;
	int		moves;
	int		n_items;
	int		n_player;
	int		n_exit;
	int		win_x;
	int		player_x;
	int		player_y;
	int		win_y;
	int		end;
	int		taken;
	int		exit_x;
	int		exit_y;
	int		loop;
	int		finish;
	int		counter;
	int		i;

}	t_game;

char	**ft_read_map(char **map);
int		ft_map_validator(t_game *game);
int		ft_is_rectangular(char **map);
int		ft_01cep(char **map);
int		ft_walls(char **map);
int		ft_at_least(t_game *game);

void	map_size(t_game *game);
void	image_generator(t_game *game);
void	player_generator(t_game *game);
void	structure_generator(t_game *game);
void	map_generator(t_game *game);
void	map_draw(t_game *game);
void	player_draw(t_game *game, int x, int y);
void	img_draw(t_game *game, void *image, int x, int y);

void	gameplay(t_game *game);
int		ft_keypress(int keycode, t_game *game);
int		ft_close(t_game *game);

void	game_events(int keycode, t_game *game);
void	player_w(t_game *game);
void	player_w_move(t_game *game);
void	player_a(t_game *game);
void	player_a_move(t_game *game);
void	player_s(t_game *game);
void	player_s_move(t_game *game);
void	player_d(t_game *game);
void	player_d_move(t_game *game);
void	movement(t_game *game);
void	portal_message(t_game *game);

void	w_key(t_game *game);
void	a_key(t_game *game);
void	s_key(t_game *game);
void	d_key(t_game *game);

#endif