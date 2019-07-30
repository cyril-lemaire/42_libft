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

LIBNAME =			ft
STATIC_LIBNAME =	lib${LIBNAME}.a
SHARED_LIBNAME =	lib${LIBNAME}.so

INCL_DIR =		includes
SRC_DIR =		srcs
BIN_ROOT =		bin
STATIC_DIR =	$(BIN_ROOT)/static
SHARED_DIR =	$(BIN_ROOT)/shared

SRC_NAMES =	atoi			\
			bzero			\
			isalnum			\
			isalpha			\
			isascii			\
			isdigit			\
			isprint			\
			memccpy			\
			memchr			\
			memcmp			\
			memcpy			\
			memmove			\
			memset			\
			strcat			\
			strchr			\
			strcmp			\
			strcpy			\
			strdup			\
			strlcat			\
			strlen			\
			strncat			\
			strncmp			\
			strncpy			\
			strnstr			\
			strrchr			\
			strstr			\
			tolower			\
			toupper			\
			memalloc		\
			memdel			\
			strnew			\
			strdel			\
			strclr			\
			striter			\
			striteri		\
			strmap			\
			strmapi			\
			strequ			\
			strnequ			\
			strsub			\
			strjoin			\
			strtrim			\
			itoa			\
			strsplit		\
			putchar			\
			putstr			\
			putendl			\
			putnbr			\
			putchar_fd		\
			putstr_fd		\
			putendl_fd		\
			putnbr_fd		\
			lstnew			\
			lstnew_nocp		\
			lstdelone		\
			lstdel			\
			lstadd			\
			lstiter			\
			lstmap			\
			isspace			\
			mod				\
			abs				\
			lstcpy			\
			lstappend		\
			lstdelnext		\
			lstgetindex		\
			lstdelindex		\
			min				\
			max				\
			realloc			\
			stracat			\
			stradd			\
			wcslen			\
			sqrtint			\

SRC =			${SRC_NAMES:%=${SRC_DIR}/${LIBNAME}_%.c}
STATIC_BIN =	${SRC_NAMES:%=${STATIC_DIR}/${LIBNAME}_%.o}
SHARED_BIN =	${SRC_NAMES:%=${SHARED_DIR}/${LIBNAME}_%.o}

CC =		gcc
CFLAGS = 	-Wall -Wextra -Werror
AR_RCS =	ar rcs
RM_F =		rm -f
MKDIR_P =	mkdir -p
TOUCH =		touch

DEFAULT_MODE =	a	# a: static library, so: shared objects library

all: ${DEFAULT_MODE}
clean: clean_${DEFAULT_MODE}
fclean: fclean_${DEFAULT_MODE}
re: re_${DEFAULT_MODE}
reclean: reclean_${DEFAULT_MODE}

%.o: CFLAGS += -c
$(SHARED_DIR)/%.o: CFLAGS += -fPIC
$(STATIC_DIR)/%.o ${SHARED_DIR}/%.o: ${SRC_DIR}/%.c .mkdir_${dir $@}
	${CC} ${CFLAGS} -I ${INCL_DIR} -o $@ $<

.mkdir_%:
	${MKDIR_P} $*
	${TOUCH} $@

a: ${STATIC_LIBNAME}

so: ${SHARED_LIBNAME}

${STATIC_LIBNAME}: ${STATIC_BIN}
	ar rcs $@ $?

${SHARED_LIBNAME}: ${SHARED_BIN}
	@echo '${CC} -shared ${CFLAGS} -o $@ [Libft shared binaries]'
	${CC} -shared ${CFLAGS} -o $@ $^

clean_a:
	@echo "@${RM_F} [Libft static binaries]"
	@${RM_F} ${STATIC_OBJ}

clean_so:
	@echo "@${RM_F} [Libft shared binaries]"
	@${RM_F} ${SHARED_OBJ}

fclean_a: clean_a
	${RM_F} ${STATIC_LIBNAME}

fclean_so: clean_so
	${RM_F} ${SHARED_LIBNAME}

re_a: fclean_a a

re_so: fclean_so so

.PHONY: all clean fclean re a clean_a fclean_a re_a so clean_so fclean_so re_so
