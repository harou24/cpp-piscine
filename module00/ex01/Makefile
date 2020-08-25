NAME = phonebook

SRC = Phonebook.class.cpp\
      Contact.class.cpp

INC = Phonebook.class.hpp\
      Contact.class.hpp

CC = clang++
CC_FLAGS = -Wall -Wextra -Werror

#OBJ := $(SRC:%cpp=%.o)

all : $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CC_FLAGS) $(SRC) $(INC)
clean:
	rm -f $(NAME)

re: clean all
