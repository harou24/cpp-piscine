NAME = megaphone

SRC = megaphone.cpp

CC = clang++
CC_FLAGS = -Wall -Wextra -Werror

#OBJ := $(SRC:%cpp=%.o)

all : $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CC_FLAGS) -o $(NAME) $(SRC)
clean:
	rm -f $(NAME)

re: clean all
