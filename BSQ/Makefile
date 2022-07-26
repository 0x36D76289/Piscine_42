NAME = bsq
CC = gcc
CFLAGS = -Werror -Wextra -Wall
SRC = *.c

all: ${NAME}
	${CC} ${CFLAGS} ${SRC} -o ${NAME}

${NAME}:
	${CC} ${CFLAGS} -o ${NAME} ${SRC}

clean:
	rm -f *.o

fclean: clean
	rm -f ${NAME}

re: fclean all

