CC		= gcc
CFLAGS	= -Werror -Wextra -Wall
SRCS	= srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJS	= ${SRCS:.c=.o}
NAME	= libft.a
HEADERS = includes/

.c.o:
	${CC} ${CFLAGS} -I ${HEADERS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
	ar -rc ${NAME} ${OBJS}

all:	${NAME}

clean:
	rm -f ${OBJS}

fclean:	clean
	rm -f ${NAME}

re:	fclean all
