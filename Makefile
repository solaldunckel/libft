# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/07 12:02:19 by sdunckel          #+#    #+#              #
#    Updated: 2019/10/08 17:27:49 by sdunckel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
SRCS	= ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_strlen.c \
			ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_strchr.c \
			ft_strrchr.c ft_strncmp.c ft_strlcpy.c ft_strlcat.c ft_strnstr.c \
			ft_memcpy.c ft_memccpy.c ft_bzero.c ft_memset.c ft_memmove.c \
			ft_memchr.c ft_memcmp.c ft_calloc.c ft_strdup.c ft_strstr.c \
			ft_putchar.c ft_strcat.c ft_strcpy.c ft_putnbr.c ft_putstr.c \
			ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_intlen.c \
			ft_itoa.c ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c \
			ft_putendl_fd.c ft_putnbr_fd.c ft_lstnew.c ft_lstadd_front.c \
			ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
			ft_lstclear.c ft_lstiter.c ft_lstmap.c ft_putendl.c
OBJS	= ${SRCS:.c=.o}
HEADER	= libft.h

CC		= gcc
CFLAGS 	= -Wall -Wextra -Werror
RM		= rm -f

${NAME}:	${OBJS}
			@ar -rcs ${NAME} ${OBJS}
			# @${CC} ${CFLAGS} ${SRCS} main.c -I ${HEADER} -o libft_out

%.o: %.c
			@${CC} -c ${SRCS} ${CFLAGS} -I ${HEADER}

all:		${NAME}

clean:
			@${RM} ${OBJS}

fclean:		clean
			@${RM} ${NAME} libft_out

re:			fclean all

.PHONY: 	all fclean clean re
