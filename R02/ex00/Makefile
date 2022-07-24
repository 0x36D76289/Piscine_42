CC		= cc
NAME	= rush-02
SRCS	= arg_check.c conv_base_dict.c error.c error.c libft.c main.c put_all.c
OBJS	= ${SRCS:.c=.o}
HEADER	= ./headers/header.h
CFLAGS  = -Wall -Wextra -Werror

${NAME}:	${SRCS}
	${CC} -c ${CFLAGS} ${SRCS}

all:	${NAME}

clean:
	rm -f ${OBJS}

fclean:		clean
	rm -f ${NAME}

re:	fclean ${NAME}
