SRCS	= ft_putchar.c ft_putstr.c ft_strlen.c ft_atoi.c \
		  ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
		  ft_tolower.c ft_toupper.c \
		  ft_memset.c ft_memmove.c ft_memcpy.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_bzero.c \
		  ft_strcat.c ft_strncat.c ft_strlcat.c ft_strdup.c ft_strcpy.c ft_strncpy.c ft_strclr.c \
		  ft_strstr.c ft_strnstr.c ft_strchr.c ft_strrchr.c ft_strcmp.c ft_strncmp.c ft_strequ.c ft_strnequ.c \
		  ft_strsub.c ft_strjoin.c ft_strtrim.c ft_strsplit.c \
		  ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c \
		  ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c

OBJS	= ${SRCS:.c=.o}

NAME	= libft.a

CC		= gcc
LIB		= ar rc
RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I.

${NAME}:	${OBJS}
			${LIB} ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
