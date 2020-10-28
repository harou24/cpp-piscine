#ifndef INTERN_H_
# define INTERN_H_

# include <iostream>
# include <exception>
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"


class Form;

class Form;
class Intern
{
			public:
				Intern();
				~Intern();
				Form*	makeForm(const std::string& formname, const std::string& formtarget) const;
			private:
				Intern(const Intern& other);
				Intern& operator=(const Intern& other);

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
