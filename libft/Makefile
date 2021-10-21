# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/20 12:04:06 by umartin-          #+#    #+#              #
#    Updated: 2021/10/21 10:51:36 by umartin-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
GCCFLAGS = -Wall -Werror -Wextra
CC = gcc
RM = rm -f
ARRC = ar rc
SOURCE = 
CSOURCE = $(SOURCE:%.c%.o)

all: $(NAME)

$(NAME): $(SOURCE)
	$(CC) $(GCCFLAGS) $(SOURCE)
	
.PHONY: clean
clean: 
	$(RM) $(CSOURCE)

fclean: clean
	$(RM) $(NAME)
	
re: fclean all