#	Library functions:
#		- Display
#		- Display (2)
#		- Char type checks
#		- Char manip
#		- Void * manip
#		- String writing
#		- String reading
#		- String reading (2)
#		- String advanced
#		- Malloc/Free
#		- Function pointers
SRCS	= ft_putchar.c ft_putchar_fd.c ft_putstr.c ft_putstr_fd.c \
		  ft_putendl.c ft_putendl_fd.c ft_putnbr.c ft_putnbr_fd.c \
		  ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isprint.c ft_isascii.c \
		  ft_tolower.c ft_toupper.c \
		  ft_memset.c ft_bzero.c ft_memdup.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c \
		  ft_strcat.c ft_strncat.c ft_strlcat.c ft_strcpy.c ft_strncpy.c ft_strdup.c ft_strndup.c ft_strclr.c \
		  ft_strlen.c ft_strcmp.c ft_strncmp.c ft_strequ.c ft_strnequ.c \
		  ft_strchr.c ft_strrchr.c ft_strstr.c ft_strnstr.c \
		  ft_strsub.c ft_strjoin.c ft_strtrim.c ft_strsplit.c ft_atoi.c ft_itoa.c \
		  ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c ft_realloc_byte.c \
		  ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c \
		  ft_lstnew.c ft_lstdelone.c ft_lstdel.c ft_lstadd.c ft_lstadd_back.c ft_lstiter.c ft_lstmap.c

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
