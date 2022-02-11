# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/19 13:31:00 by umartin-          #+#    #+#              #
#    Updated: 2022/02/11 16:22:22 by umartin-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFT_PATH		=	./libft
LIBFT			=	$(LIBFT_PATH)/libft.a

MINILIBX_PATH	=	./mlx
MINILIBX		=	$(MINILIBX_PATH)/libmlx.a

NAME = so_long
NAME_BONUS = so_long_bonus

SRC = sources/so_long.c \
sources/ft_map_validator.c \
sources/ft_read_map.c \
sources/ft_map_generator.c \
sources/map_draw.c \
sources/gameplay.c \
sources/game_events.c \
sources/player.c \
sources/exit_anim.c \

OBJ = sources/so_long.o \
sources/ft_map_validator.o \
sources/ft_read_map.o \
sources/ft_map_generator.o \
sources/map_draw.o \
sources/gameplay.o \
sources/game_events.o \
sources/player.o \
sources/anim.o \

SRC_BONUS = sources_bonus/so_long_bonus.c \
sources_bonus/ft_map_validator_bonus.c \
sources_bonus/ft_read_map_bonus.c \
sources_bonus/ft_map_generator_bonus.c \
sources_bonus/map_draw_bonus.c \
sources_bonus/gameplay_bonus.c \
sources_bonus/game_events_bonus.c \
sources_bonus/player_bonus.c \
sources_bonus/exit_anim_bonus.c \

OBJ_BONUS = sources_bonus/so_long_bonus.o \
sources_bonus/ft_map_validator_bonus.o \
sources_bonus/ft_read_map_bonus.o \
sources_bonus/ft_map_generator_bonus.o \
sources_bonus/map_draw_bonus.o \
sources_bonus/gameplay_bonus.o \
sources_bonus/game_events_bonus.o \
sources_bonus/player_bonus.o \
sources_bonus/anim_bonus.o \

CC = gcc
CCFLAGS = -Wall -Wextra -Werror
RM = rm -f
ARRC = ar rc

all: $(NAME)

%.o: %.c
	make -C libft
	make -C mlx
	$(CC) $(CCFLAGS) -Imlx -c $^ -o $@

$(NAME): $(OBJ)
	$(CC) $(LIBFT) -Lmlx -lmlx -framework OpenGL -framework AppKit $^ -o $@

$(NAME_BONUS): $(OBJ_BONUS)
	$(CC) $(LIBFT) -Lmlx -lmlx -framework OpenGL -framework AppKit $^ -o $@

$(CSRC): $(SRC)
	$(CC) $(CCFLAGS) -c $(SRC)

$(CSRC_BONUS): $(SRC_BONUS)
	$(CC) $(CCFLAGS) -c $(SRC_BONUS)

clean: 
	$(RM) $(OBJ) $(OBJ_BONUS)

fclean: clean
	$(RM) $(NAME) $(NAME_BONUS)
	make fclean -C libft/
	make clean -C mlx/

re: fclean all

.PHONY: clean re fclean all bonus