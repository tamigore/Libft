# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tamigore <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/08 15:04:29 by tamigore          #+#    #+#              #
#    Updated: 2018/11/12 14:47:25 by tamigore         ###   ########.fr        #
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
		ft_bzero.c		\
		ft_tolower.c	\
		ft_toupper.c

SRC/I = ft_isalnum.c	\
		ft_isalpha.c	\
		ft_isascii.c	\
		ft_isdigit.c	\
		ft_isprint.c

SRC/P = ft_putchar.c	\
		ft_putstr.c		\
		ft_putendl.c	\
		ft_putnbr.c

SRC/S = ft_strlen.c		\
		ft_strdup.c		\
		ft_strcpy.c		\
		ft_strncpy.c	\
		ft_strcat.c		\
		ft_strncat.c	\
		ft_strlcat.c	\
		ft_strstr.c		\
		ft_strnstr.c	\
		ft_strchr.c		\
		ft_strrchr.c	\
		ft_strcmp.c		\
		ft_strncmp.c	\
		ft_strequ.c		\
		ft_strnequ.c	\
		ft_strmap.c		\
		ft_strmapi.c	\
		ft_striter.c	\
		ft_striteri.c	\
		ft_strnew.c		\
		ft_strdel.c		\
		ft_strclr.c

INC = libft.h
SRC = $(SRC/P) $(SRC/O) $(SRC/I) $(SRC/S) $(SRC/M)
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
