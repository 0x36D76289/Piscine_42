CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
HEADERS		= ./headers
SRC			= main.c res_print.c print.c
OBJ			= ${SRC:.c=.o}
TARGET		= do-op

.c.o:
	${CC} ${CFLAGS} -g -I ${HEADERS} -c $< -o ${<:.c=.o}

$(TARGET): $(OBJ)
	${CC} ${CFLAGS} -g -I ${HEADERS} ${OBJ} -o ${TARGET}

all:		$(TARGET)

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${TARGET}

re: fclean all
