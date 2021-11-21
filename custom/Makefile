PART1	= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isprint.c ft_isascii.c \
		  ft_strlen.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strnstr.c \
		  ft_strlcpy.c ft_strlcat.c ft_strdup.c \
		  ft_tolower.c ft_toupper.c \
		  ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_calloc.c \
		  ft_atoi.c

PART2	= ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
		  ft_strmapi.c ft_striteri.c \
		  ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
		  ft_itoa.c

BONUS	= ft_lstnew.c ft_lstadd_front.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c \
		  ft_lstsize.c ft_lstlast.c ft_lstiter.c ft_lstmap.c

CUSTOM	= ft_strcat.c ft_strncat.c ft_strcpy.c ft_strncpy.c ft_strndup.c \
		  ft_strcmp.c ft_strequ.c ft_strnequ.c ft_strstr.c \
		  ft_memdup.c ft_memccpy.c ft_memalloc.c ft_memdel.c ft_strnew.c ft_strclr.c ft_strdel.c \
		  ft_putchar.c ft_putstr.c ft_putendl.c ft_putnbr.c \
		  ft_striter.c ft_strmap.c \
		  ft_realloc_byte.c

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
