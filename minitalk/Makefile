# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/02 16:27:22 by umartin-          #+#    #+#              #
#    Updated: 2022/05/02 16:36:19 by umartin-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = server
NAME1 = client

LIBFT_PATH		=	./libft
LIBFT			=	$(LIBFT_PATH)/libft.a

SRC = server.c \

SRC1 = client.c \

OBJ = server.o \

OBJ1 = client.o \

CC = gcc
CCFLAGS = -Wall -Wextra -Werror
RM = rm -f
ARRC = ar rc

all: $(NAME) $(NAME1)

m: $(NAME)

$(NAME): $(OBJ)
	make -C libft
	$(CC) $(CCFLAGS) $(LIBFT) $^ -o $@

$(NAME1): $(OBJ1)
	$(CC) $(CCFLAGS) $^ -o $@

%.o: %.c
	$(CC) -c $^ -o $@

clean: 
	$(RM) $(OBJ) $(OBJ1)

fclean: clean
	$(RM) $(NAME) $(NAME1)
	make fclean -C libft/

re: fclean all

rebonus: fclean bonus

.PHONY: clean re fclean all bonus m rebonus