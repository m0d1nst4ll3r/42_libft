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

PARTB	= ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c \
		  ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

OBJS	= ${PART1:.c=.o} ${PART2:.c=.o}

OBJSB	= ${PARTB:.c=.o}

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

bonus:		${OBJS} ${OBJSB}
			${LIB} ${NAME} ${OBJS} ${OBJSB}

clean:
			${RM} ${OBJS} ${OBJSB}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re bonus
