SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
CC = gcc
FLAGS = -Werror -Wextra -Wall
TARGET = out

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

.PHONY: clean fclean all

clean:
	@echo "Removing object files successfully"
	@rm -f $(OBJ)

fclean: clean
	@echo "Removing executable file successfully"
	@rm -f $(TARGET)

re: fclean all
