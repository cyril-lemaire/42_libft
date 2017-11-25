#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clemaire <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/13 16:35:50 by clemaire          #+#    #+#              #
#    Updated: 2017/11/25 13:38:37 by clemaire         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a

SRC = ft_atoi.c		\
	ft_bzero.c		\
	ft_isalnum.c	\
	ft_isalpha.c	\
	ft_isascii.c	\
	ft_isdigit.c	\
	ft_isprint.c	\
	ft_memccpy.c	\
	ft_memchr.c		\
	ft_memcmp.c		\
	ft_memcpy.c		\
	ft_memmove.c	\
	ft_memset.c		\
	ft_strcat.c		\
	ft_strchr.c		\
	ft_strcmp.c		\
	ft_strcpy.c		\
	ft_strdup.c		\
	ft_strlcat.c	\
	ft_strlen.c		\
	ft_strncat.c	\
	ft_strncmp.c	\
	ft_strncpy.c	\
	ft_strnstr.c	\
	ft_strrchr.c	\
	ft_strstr.c		\
	ft_tolower.c	\
	ft_toupper.c

SRC_FOLDER = .

BIN = ${SRC:.c=.o}

.PHONY: all clean fclean re nobin

all: ${NAME}

${BIN}:
	gcc -c -I${SRC_FOLDER} -Wall -Wextra -Werror ${SRC}

${NAME}: ${BIN}
	ar rcs ${NAME} ${BIN}
	ranlib ${NAME}

clean:
	rm -f ${BIN}

fclean: clean
	rm -f ${NAME}

re: fclean all

nobin: all clean
