# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlagrang <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/03 10:27:11 by mlagrang          #+#    #+#              #
#    Updated: 2021/11/09 11:39:18 by mlagrang         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #
#
SRCS	= ft_atoi.c ft_isalnum.c ft_isdigit.c ft_memcmp.c ft_memset.c ft_strlcat.c ft_strncmp.c ft_tolower.c ft_bzero.c ft_isalpha.c ft_isprint.c ft_memcpy.c ft_strchr.c ft_strlcpy.c ft_strnstr.c ft_toupper.c ft_calloc.c ft_isascii.c ft_memchr.c ft_memmove.c ft_strdup.c ft_strlen.c ft_strrchr.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

BNS		= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

HEADERS	= ./libft.h

OBJS	= ${SRCS:.c=.o}

OBJSB	= ${BNS:.c=.o}

NAME	= libft.a

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I includes

${NAME}:	${OBJS}
			ar rc ${NAME} ${OBJS}

all:	${NAME}

bonus:	${OBJS} ${OBJSB}
		ar rc ${NAME} ${OBJS} ${OBJSB}

clean:
		rm -f ${OBJS} ${OBJSB}

fclean:	clean
		rm -f ${NAME}

re:		fclean all

.PHONY:	all clean fclean re bonus
