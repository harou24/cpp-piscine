NAME = t

SRC = FragTrap.cpp\
	  Scavtrap.cpp\
	  ClapTrap.cpp\
	  main.cpp

INC = FragTrap.hpp\
	  ScavTrap.hpp\
	  ClapTrap.hpp

CC = clang++
CC_FLAGS = -std=c++98 -Wall -Werror -Wextra

OBJ := $(SRC:.cpp=.o)
all : $(NAME)

$(NAME): $(OBJ) $(INC)
	$(CC) $(OBJ) -o $@

$(OBJ): %.o: %.cpp
	$(CC) $(CC_FLAGS) -o $@ -c $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: clean all
