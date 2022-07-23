CC		= cc
CFLAGS	= -Werror -Wextra -Wall
SRCS	= srcs/
OBJS	= ${SRCS:.c=.o}
NAME	= rush-02.a
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
