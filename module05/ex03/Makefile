NAME = Bureaucrat

SRC = Bureaucrat.cpp\
	  Form.cpp\
	  ShrubberyCreationForm.cpp\
	  RobotomyRequestForm.cpp\
	  PresidentialPardonForm.cpp\
	  Intern.cpp\
	  main.cpp

INC = Bureaucrat.hpp\
	  Form.hpp\
	  RobotomyRequestForm.hpp\
	  PresidentialPardonForm.hpp\
	  Intern.hpp\
	  ShrubberyCreationForm.hpp

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
	rm -f *_shrubbery

re: clean all
