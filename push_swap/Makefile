# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/03 15:07:52 by umartin-          #+#    #+#              #
#    Updated: 2022/04/08 14:41:44 by umartin-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

LIBFT_PATH		=	./libft
LIBFT			=	$(LIBFT_PATH)/libft.a

SRC = push_swap.c \
push_swap_add.c \
push_swap_spmoves.c \
push_swap_rmoves.c \
push_swap_rrmoves.c \
push_swap_checker.c \
case_3.c \
case_5.c \
case_standard.c \
algorithm_of_the_mandangon.c \
push_swap_utils.c \
the_chosen_one.c \
no_op_printer.c \
stack_split.c \
the_chosen_one_500.c \
the_chosen_one_500_utils.c \
the_chosen_one_utils.c \
the_chosen_one_utils_2.c \
the_chosen_one_utils_3.c \
script_utils.c \


OBJ = push_swap.o \
push_swap_add.o \
push_swap_spmoves.o \
push_swap_rmoves.o \
push_swap_rrmoves.o \
push_swap_checker.o \
case_3.o \
case_5.o \
case_standard.o \
algorithm_of_the_mandangon.o \
push_swap_utils.o \
the_chosen_one.o \
no_op_printer.o \
stack_split.o \
the_chosen_one_500.o \
the_chosen_one_500_utils.o \
the_chosen_one_utils.o \
the_chosen_one_utils_2.o \
the_chosen_one_utils_3.o \
script_utils.o \

CC = gcc
CCFLAGS = -Wall -Wextra -Werror -g3 -fsanitize=address
RM = rm -f
ARRC = ar rc

all: $(NAME)

m: $(NAME)

$(NAME): $(OBJ)
	make -C libft
	$(CC) $(CCFLAGS) $(LIBFT) $^ -o $@

%.o: %.c
	$(CC) $(CCFLAGS) -c $^ -o $@
	

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