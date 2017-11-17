#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clemaire <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/13 16:35:50 by clemaire          #+#    #+#              #
#    Updated: 2017/11/13 16:57:04 by clemaire         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = "libft.a"

all: ${NAME}

${NAME}:
	gcc -c -Wall -Wextra -Werror ft_*.c
	ar rcs ${NAME} ft_*.o
clean:
	rm -f \#*\# *\~ *.o

fclean: clean
	rm -f #{NAME}

re: fclean all
