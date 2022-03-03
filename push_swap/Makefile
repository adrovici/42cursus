# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/03 15:07:52 by umartin-          #+#    #+#              #
#    Updated: 2022/03/03 17:12:06 by umartin-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

LIBFT_PATH		=	./libft
LIBFT			=	$(LIBFT_PATH)/libft.a

SRC = push_swap.c \

OBJ = push_swap.o \

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