#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clemaire <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/13 16:35:50 by clemaire          #+#    #+#              #
#    Updated: 2017/12/01 13:59:18 by clemaire         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a

SRC = ft_atoi.c			\
	ft_bzero.c			\
	ft_isalnum.c		\
	ft_isalpha.c		\
	ft_isascii.c		\
	ft_isdigit.c		\
	ft_isprint.c		\
	ft_memccpy.c		\
	ft_memchr.c			\
	ft_memcmp.c			\
	ft_memcpy.c			\
	ft_memmove.c		\
	ft_memset.c			\
	ft_strcat.c			\
	ft_strchr.c			\
	ft_strcmp.c			\
	ft_strcpy.c			\
	ft_strdup.c			\
	ft_strlcat.c		\
	ft_strlen.c			\
	ft_strncat.c		\
	ft_strncmp.c		\
	ft_strncpy.c		\
	ft_strnstr.c		\
	ft_strrchr.c		\
	ft_strstr.c			\
	ft_tolower.c		\
	ft_toupper.c		\
	ft_memalloc.c		\
	ft_memdel.c			\
	ft_strnew.c			\
	ft_strdel.c			\
	ft_strclr.c			\
	ft_striter.c		\
	ft_striteri.c		\
	ft_strmap.c			\
	ft_strmapi.c		\
	ft_strequ.c			\
	ft_strnequ.c		\
	ft_strsub.c			\
	ft_strjoin.c		\
	ft_strtrim.c		\
	ft_itoa.c			\
	ft_strsplit.c		\
	ft_putchar.c		\
	ft_putstr.c			\
	ft_putendl.c		\
	ft_putnbr.c			\
	ft_putchar_fd.c		\
	ft_putstr_fd.c		\
	ft_putendl_fd.c		\
	ft_putnbr_fd.c		\
	ft_lstnew.c			\
	ft_lstdelone.c		\
	ft_lstdel.c			\
	ft_lstadd.c			\
	ft_lstiter.c		\
	ft_lstmap.c			\
	ft_isspace.c		\
	ft_mod.c			\
	ft_abs.c			\
	ft_lstcpy.c			\
	ft_lstappend.c		\
	ft_lstdelnext.c		\
	ft_lstgetindex.c	\
	ft_lstdelindex.c	\
	ft_min.c			\
	ft_max.c			\
	ft_realloc.c		\
	ft_wcslen.c			\

SRC_FOLDER = .

OBJ = ${SRC:.c=.o}

.PHONY: all clean fclean re obj nobj

all: ${NAME}

obj: ${OBJ}

%.o: %.c
	gcc -c -I${SRC_FOLDER} -Wall -Wextra -Werror -c -o $@ $<

${NAME}: ${OBJ}
	@echo '@ar rcs ${NAME} [OBJ FILES]'
	@ar rcs ${NAME} ${OBJ}

clean:
	@echo "@rm -f [OBJ FILES]"
	@rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all

nobj: all clean
