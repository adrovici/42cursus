# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/22 12:23:01 by umartin-          #+#    #+#              #
#    Updated: 2021/11/30 16:24:31 by umartin-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SOURCE = ft_printf.c \
ft_put.c \
ft_puthexa.c \

OBJECTS = ft_printf.o \
ft_put.o \
ft_puthexa.o \

CC = gcc
RM = rm -f
ARRC = ar rc

all: $(NAME)

$(NAME): $(OBJECTS)
	$(ARRC) $(NAME) $(OBJECTS)

$(CSOURCE): $(SOURCE)
	$(CC) $(CCFLAGS) -c $(SOURCE)

clean: 
	$(RM) $(OBJECTS) $(BONUS_OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean re fclean all bonus
