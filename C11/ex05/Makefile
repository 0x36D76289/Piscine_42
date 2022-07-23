CC		= gcc
CFLAGS	= -Werror -Wextra -Wall
SRCS	= main.c do_op.c operation.c print.c 
OBJS	= ${SRCS:.c=.o}
NAME	= do-op
HEADERS = *.h

.c.o:
	${CC} ${CFLAGS} -g -I ${HEADERS}-c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
	gcc ${CFLAGS} -g -I ${HEADERS} ${OBJS} -o ${NAME}

all:	${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all