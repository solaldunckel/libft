# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/07 12:02:19 by sdunckel          #+#    #+#              #
#    Updated: 2019/10/07 18:44:01 by sdunckel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
SRCS	= ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_strlen.c \
			ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_strchr.c \
			ft_strrchr.c ft_strncmp.c ft_strlcpy.c ft_strlcat.c ft_strnstr.c \
			ft_memcpy.c ft_memccpy.c ft_bzero.c ft_memset.c ft_memmove.c \
			ft_memchr.c ft_memcmp.c ft_calloc.c ft_strdup.c
OBJS	= ${SRCS:.c=.o}
HEADER	= libft.h

CC		= gcc
CFLAGS 	= -Wall -Wextra -Werror
RM		= rm -f

${NAME}:	${OBJS}
			ar -rcs ${NAME} ${OBJS}
			${CC} ${SRCS} main.c -I ${HEADER} -o libft_out

%.o: %.c
			${CC} -c ${SRCS} ${CFLAGS} -I ${HEADER}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME} libft_out

re:			fclean all

.PHONY: 	all fclean clean re
