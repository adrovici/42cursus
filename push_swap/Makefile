# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/03 15:07:52 by umartin-          #+#    #+#              #
#    Updated: 2022/04/12 16:34:13 by umartin-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
BONUS = checker

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

BNS = bonus/bonus_main.c \
bonus/bonus_spmoves.c \
bonus/bonus_rmoves.c \
bonus/bonus_rrmoves.c \
bonus/bonus_utils.c \
bonus/bonus_visual_printer.c \
bonus/bonus_free.c \

BNS_OBJ = bonus/bonus_main.o \
bonus/bonus_spmoves.o \
bonus/bonus_rmoves.o \
bonus/bonus_rrmoves.o \
bonus/bonus_utils.o \
bonus/bonus_visual_printer.o \
bonus/bonus_free.o \


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
CCFLAGS = -Wall -Wextra -Werror
RM = rm -f
ARRC = ar rc

all: $(NAME)

m: $(NAME)

bonus: $(BONUS)

$(BONUS): $(BNS_OBJ)
	$(CC) $(CCFLAGS) $(LIBFT) $^ -o $@

$(NAME): $(OBJ)
	make -C libft
	$(CC) $(CCFLAGS) $(LIBFT) $^ -o $@

%.o: %.c
	$(CC) -c $^ -o $@

clean: 
	$(RM) $(OBJ) $(BNS_OBJ)

fclean: clean
	$(RM) $(NAME) $(BONUS)
	make fclean -C libft/

re: fclean all

rebonus: fclean bonus

.PHONY: clean re fclean all bonus m rebonus