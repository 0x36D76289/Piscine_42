CC			= cc
CFLAGS		= -Wall -Wextra -Werror
HEADERS		= main.h
SRC			= main.c word.c execute.c printable.c put.c
OBJ			= ${SRC:.c=.o}
TARGET		= ex00

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(TARGET) $(HEADERS) -L

all:		$(TARGET)

clean:
	rm -f $(TARGET) $(OBJ)

fclean: clean
	rm -f $(TARGET) $(OBJ)

re: fclean all
