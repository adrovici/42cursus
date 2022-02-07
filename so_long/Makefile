# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/19 13:31:00 by umartin-          #+#    #+#              #
#    Updated: 2022/02/02 18:09:51 by umartin-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long

SRC = so_long.c \

OBJ = so_long.o \

CC = gcc
CCFLAGS = -Wall -Wextra -Werror
RM = rm -f
ARRC = ar rc

all: $(NAME)

%.o: %.c
	$(CC) $(CCFLAGS) -Imlx -c $^ -o $@

$(NAME): $(OBJ)
	$(CC) -Lmlx -lmlx -framework OpenGL -framework AppKit $^ -o $@

$(CSRC): $(SRC)
	$(CC) $(CCFLAGS) -c $(SRC)

clean: 
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean re fclean all bonus