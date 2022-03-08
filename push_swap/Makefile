# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/03 15:07:52 by umartin-          #+#    #+#              #
#    Updated: 2022/03/08 15:12:44 by umartin-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

LIBFT_PATH		=	./libft
LIBFT			=	$(LIBFT_PATH)/libft.a

SRC = push_swap.c \
push_swap_add.c \
push_swap_smoves.c \
push_swap_rmoves.c \

OBJ = push_swap.o \
push_swap_add.o \
push_swap_smoves.o \
push_swap_rmoves.o \

CC = gcc
CCFLAGS = -Wall -Wextra -Werror
RM = rm -f
ARRC = ar rc

all: $(NAME)

m: $(NAME)

$(NAME): $(OBJ)
	make -C libft
	$(CC) $(CCFLAGS) $(LIBFT) $^ -o $@

%.o: %.c
	$(CC) -c $^ -o $@
	

#$(CSRC): $(SRC)
#	$(CC) $(CCFLAGS) -c $(SRC)

#$(CSRC_BONUS): $(SRC_BONUS)
#	$(CC) $(CCFLAGS) -c $(SRC_BONUS) -o $(CSRC_BONUS)

clean: 
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME) $(NAME_BONUS)
	make fclean -C libft/

re: fclean all

rebonus: fclean bonus

.PHONY: clean re fclean all bonus m rebonus