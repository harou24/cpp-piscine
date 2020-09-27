NAME = pony

SRC = Pony.cpp\

INC = Pony.hpp

CC = clang++
CC_FLAGS = -std=c++98 -Wall -Werror -Wextra

OBJ := $(SRC:.cpp=.o)
all : $(NAME)

$(NAME): $(OBJ) $(INC)
	$(CC) $(OBJ) -o $@

$(OBJ): %.o: %.cpp %.hpp
	$(CC) $(CC_FLAGS) -o $@ -c $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: clean all
