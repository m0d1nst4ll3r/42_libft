# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rpohlen <rpohlen@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/25 17:00:48 by rpohlen           #+#    #+#              #
#    Updated: 2021/11/25 17:01:08 by rpohlen          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PART1		= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isprint.c ft_isascii.c \
			  ft_strlen.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strnstr.c \
			  ft_strlcpy.c ft_strlcat.c ft_strdup.c \
			  ft_tolower.c ft_toupper.c \
			  ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_calloc.c \
			  ft_atoi.c

PART2		= ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
			  ft_strmapi.c ft_striteri.c \
			  ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
			  ft_itoa.c

PARTB		= ft_lstnew.c ft_lstadd_front.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c \
			  ft_lstsize.c ft_lstlast.c ft_lstiter.c ft_lstmap.c

CUSTOM		= ft_memalloc_bonus.c ft_memccpy_bonus.c ft_memdel_bonus.c ft_memdup_bonus.c \
			  ft_strnew_bonus.c ft_strdel_bonus.c ft_strndup_bonus.c \
			  ft_putchar_bonus.c ft_putstr_bonus.c ft_putendl_bonus.c ft_putnbr_bonus.c \
			  ft_strcat_bonus.c ft_strncat_bonus.c ft_strcpy_bonus.c ft_strncpy_bonus.c \
			  ft_strclr_bonus.c ft_strcmp_bonus.c ft_strequ_bonus.c ft_strnequ_bonus.c ft_strstr_bonus.c \
			  ft_striter_bonus.c ft_strmap_bonus.c \
			  ft_realloc_byte_bonus.c

OBJS		= ${PART1:.c=.o} ${PART2:.c=.o}

OBJSB		= ${PARTB:.c=.o} ${CUSTOM:.c=.o}

NAME		= libft.a

CC			= gcc
LIB			= ar rcs
RM			= rm -f

CFLAGS		= -Wall -Wextra -Werror

${NAME}:	${OBJS}
			${LIB} $@ $?

all:		${NAME}

bonus:		${NAME} ${OBJSB}
			${LIB} $(NAME) $?

clean:
			${RM} ${OBJS} ${OBJSB}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re bonus
