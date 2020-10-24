#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern(void){}
Intern::Intern(const Intern&){}
Intern::~Intern(void){}
Intern& Intern::operator = (const Intern&){return *this;}

Form* Intern::makeForm(const std::string &formName, const std::string &target) const
{
	if (formName == "Robotomy Request")
		return (new RobotomyRequestForm(target));
	else if (formName == "Presidential Pardon")
		return (new PresidentialPardonForm(target));
	else if (formName == "Shrubbery Creation")
		return (new ShrubberyCreationForm(target));
	else
		throw new WrongFormException();
	return (NULL);
}

Intern::WrongFormException::WrongFormException(void){}
Intern::WrongFormException::WrongFormException(const WrongFormException &cpy){*this = cpy;}
Intern::WrongFormException::~WrongFormException(void)throw(){}

Intern::WrongFormException& Intern::WrongFormException::operator = (const WrongFormException&){return (*this);}
const char* Intern::WrongFormException::what() const throw() {return ("Error : Creation File  exception !");}
