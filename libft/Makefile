# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/20 12:04:06 by umartin-          #+#    #+#              #
#    Updated: 2021/10/21 16:59:34 by umartin-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SOURCE = ft_isalpha.c \
ft_isdigit.c \
ft_isalnum.c \
ft_isascii.c \
ft_isprint.c \
ft_memset.c \
ft_bzero.c \
ft_strlen.c

OBJECTS = ft_isalpha.o \
ft_isdigit.o \
ft_isalnum.o \
ft_isascii.o \
ft_isprint.o \
ft_memset.o \
ft_bzero.o \
ft_strlen.o

CCFLAGS = -Wall -Werror -Wextra

CC = gcc
RM = rm -f
ARRC = ar rc

all: $(NAME)

$(NAME): $(OBJECTS)
	$(ARRC) $(NAME) $(OBJECTS)

$(CSOURCE): $(SOURCE)
	$(CC) $(CCFLAGS) -c $(SOURCE)
	
clean: 
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)
	
re: fclean all

.PHONY: clean re fclean all