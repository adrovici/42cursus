# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/19 13:31:00 by umartin-          #+#    #+#              #
#    Updated: 2022/02/07 13:51:50 by umartin-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFT_PATH		=	./libft
LIBFT			=	$(LIBFT_PATH)/libft.a

MINILIBX_PATH	=	./mlx
MINILIBX		=	$(MINILIBX_PATH)/libmlx.a

NAME = so_long

SRC = so_long.c \
ft_map_validator.c \
ft_read_map.c \

OBJ = so_long.o \
ft_map_validator.o \
ft_read_map.o \

CC = gcc
CCFLAGS = -Wall -Wextra -Werror
RM = rm -f
ARRC = ar rc

all: $(NAME)

%.o: %.c
	$(CC) $(CCFLAGS) -Imlx -c $^ -o $@

$(NAME): $(OBJ)
	$(CC) $(LIBFT) -Lmlx -lmlx -framework OpenGL -framework AppKit $^ -o $@

$(CSRC): $(SRC)
	$(CC) $(CCFLAGS) -c $(SRC)

clean: 
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean re fclean all bonus