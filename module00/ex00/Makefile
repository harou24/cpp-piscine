NAME = megaphone

SRC = megaphone.cpp

CC = clang++
CC_FLAGS = -std=c++98 -Wall -Wextra -Werror


all : $(NAME)

$(NAME):
	$(CC) $(CC_FLAGS) -o $(NAME) $(SRC)
clean:
	rm -f $(NAME)

re: clean all
