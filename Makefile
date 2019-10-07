# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/07 12:02:19 by sdunckel          #+#    #+#              #
#    Updated: 2019/10/07 13:55:32 by sdunckel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
SRCS	= main.c ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_strlen.c \
			ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_strchr.c 
OBJS	= ${SRCS:.c=.o}
HEADER	= libft.h

CC		= gcc
CFLAGS 	= -Wall -Wextra -Werror
RM		= rm -f

${NAME}:	${OBJS}
			ar -rcs ${NAME} ${OBJS}
			${CC} ${CFLAGS} ${SRCS} -I ${HEADER} -o libft_out

%.o: %.c
			${CC} -c ${SRCS} ${CFLAGS} -I ${HEADER}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME} libft_out

re:			fclean all

.PHONY: 	all fclean clean re
