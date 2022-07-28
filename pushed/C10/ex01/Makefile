CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
SRC			= main.c main2.c
OBJ			= ${SRC:.c=.o}
TARGET		= ft_cat
HEADERS		= main.h

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(TARGET): $(OBJ)
	${CC} ${CFLAGS} ${OBJ} -o ${TARGET}

all:		$(TARGET)

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${TARGET}
