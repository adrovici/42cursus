# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/20 12:04:06 by umartin-          #+#    #+#              #
#    Updated: 2021/10/21 11:36:45 by umartin-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CCFLAGS = -Wall -Werror -Wextra
CC = gcc
RM = rm -f
ARRC = ar rc
SOURCE = ft_isalpha.c \
ft_isdigit.c \
ft_isalnum.c \
ft_isascii.c \
ft_isprint.c \
ft_strlen.c \
ft_strlcpy.c \
ft_strlcat.c \
ft_strrchr.c \
ft_toupper.c \
ft_tolower.c \
ft_strchr.c \
ft_strncmp.c \
ft_strdup.c \
ft_strnstr.c \
ft_atoi.c \
ft_memset.c \
ft_memcpy.c \
ft_memccpy.c \
ft_memmove.c \
ft_memchr.c \
ft_memcmp.c \
ft_calloc.c \
ft_substr.c \
ft_strjoin.c \
ft_putchar_fd.c \
ft_putstr_fd.c \
ft_putendl_fd.c \
ft_putnbr_fd.c \
ft_strmapi.c \
ft_striteri.c \
ft_itoa.c \
ft_split.c \
ft_strtrim.c \
ft_bzero.c

CSOURCE = $(SOURCE:.c=.o)

all: $(NAME)

$(NAME): $(SOURCE)
	$(CC) $(CCFLAGS) $(SOURCE)

$(SOURCE): $(CSOURCE)
	$(CC) $(CCFLAGS) -c $(SOURCE)
	
.PHONY: clean
clean: 
	$(RM) $(CSOURCE)

fclean: clean
	$(RM) $(NAME)
	
re: fclean all