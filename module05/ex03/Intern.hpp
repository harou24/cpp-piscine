#ifndef INTERN_H_
# define INTERN_H_

# include <iostream>
# include <exception>
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Form;

class Intern
{
	public:
		Intern(void);
		Intern(const Intern& cpy);
		~Intern(void);
		
		Intern& operator=(const Intern& old);

		Form*	makeForm(const std::string& name, const std::string& target) const;


		class WrongFormException : public std::exception
		{
			public :
					WrongFormException(void);
					WrongFormException(const WrongFormException &cpy);
					~WrongFormException(void) throw();

					WrongFormException& operator = (const WrongFormException &old);

					virtual const char* what() const throw();
		};
};

#endif
