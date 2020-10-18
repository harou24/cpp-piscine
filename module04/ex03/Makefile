NAME = test

SRC = AMateria.cpp\
	  Character.cpp\
	  Cure.cpp\
	  Ice.cpp\
	  MateriaSource.cpp\
	  main.cpp

INC = AMateria.hpp\
	  Character.hpp\
	  Cure.hpp\
	  Ice.hpp\
	  ICharacter.hpp\
	  IMateriaSource.hpp\
	  MateriaSource.hpp

	  
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
