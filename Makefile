# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tamigore <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/08 15:04:29 by tamigore          #+#    #+#              #
#    Updated: 2018/11/09 18:21:02 by tamigore         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

FLAGS = -Wall -Wextra -Werror

SRC/M = ft_memccpy.c 	\
		ft_memmove.c 	\
		ft_memchr.c  	\
		ft_memcpy.c  	\
		ft_memset.c

SRC/O = ft_atoi.c		\
		ft_tolower.c	\
		ft_toupper.c

SRC/I = ft_isalnum.c	\
		ft_isalpha.c	\
		ft_isascii.c	\
		ft_isdigit.c	\
		ft_isprint.c

SRC/P = ft_putchar.c	\
		ft_putstr.c

SRC/S = ft_strcat.c		\
		ft_strcmp.c		\
		ft_strdup.c		\
		ft_strlen.c		\
		ft_strncmp.c	\
		ft_strnstr.c	\
		ft_strstr.c		\
		ft_strchr.c		\
		ft_strcpy.c		\
		ft_strlcat.c	\
		ft_strncat.c	\
		ft_strncpy.c	\
		ft_strrchr.c

INC = libft.h
SRC = $(SRC/P) $(SRC/O) $(SRC/I) $(SRC/S)
OBJ = $(SRC:.c=.o)
NAME = libft.a

all : $(NAME)

$(NAME) : $(OBJ)
	ar rc $(NAME) $(OBJ)

$(OBJ) :
	$(CC) $(FLAGS) -c $(SRC)

clean :
	rm -rf *.o

fclean : clean
	rm -rf $(NAME)

re : fclean all
