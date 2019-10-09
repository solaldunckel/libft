# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/07 12:02:19 by sdunckel          #+#    #+#              #
#    Updated: 2019/10/09 16:16:23 by sdunckel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

SRCS_LIST	= \
				ft_atoi.c \
				ft_atoi_base.c \
				ft_bzero.c \
				ft_calloc.c \
				ft_check_base.c \
				ft_convert_base.c \
				ft_intlen.c \
				ft_intlen_base.c \
				ft_is_in_stri.c \
				ft_is_space.c \
				ft_isalnum.c \
				ft_isalpha.c \
				ft_isascii.c \
				ft_isdigit.c \
				ft_isprint.c \
				ft_itoa.c \
				ft_itoa_base.c \
				ft_lstadd_back.c \
				ft_lstadd_front.c \
				ft_lstclear.c \
				ft_lstdelone.c \
				ft_lstiter.c \
				ft_lstlast.c \
				ft_lstmap.c \
				ft_lstnew.c \
				ft_lstsize.c \
				ft_memalloc.c \
				ft_memccpy.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_memcpy.c \
				ft_memdel.c \
				ft_memmove.c \
				ft_memset.c \
				ft_putchar.c \
				ft_putchar_fd.c \
				ft_putendl.c \
				ft_putendl_fd.c \
				ft_putnbr.c \
				ft_putnbr_fd.c \
				ft_putstr.c \
				ft_putstr_fd.c \
				ft_split.c \
				ft_strcat.c \
				ft_strchr.c \
				ft_strcmp.c \
				ft_strcpy.c \
				ft_strdel.c \
				ft_strdup.c \
				ft_strjoin.c \
				ft_strlcat.c \
				ft_strlcpy.c \
				ft_strlen.c \
				ft_strmapi.c \
				ft_strncat.c \
				ft_strncmp.c \
				ft_strncpy.c \
				ft_strnew.c \
				ft_strnstr.c \
				ft_strrchr.c \
				ft_strstr.c \
				ft_strtrim.c \
				ft_substr.c \
				ft_tolower.c \
				ft_toupper.c
SRCS		= $(addprefix ${FOLDER}/, ${SRCS_LIST})
OBJS		= ${SRCS:.c=.o}
HEADER		= includes
FOLDER		= srcs

CC			= gcc
CFLAGS 		= -Wall -Wextra -Werror
RM			= rm -f

$(NAME):	${OBJS}
			@ar -rcs ${NAME} ${OBJS}
			@${CC} ${CFLAGS} ${SRCS} srcs/main.c -I ${HEADER} -o libft_out

%.o: %.c
			@${CC} -c ${CFLAGS} -o $@ $< -I ${HEADER}

all:		${NAME}

clean:
			@${RM} ${OBJS}

fclean:		clean
			@${RM} ${NAME} libft_out

re:			fclean all

.PHONY: 	all fclean clean re
