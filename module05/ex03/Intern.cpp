#include "Intern.hpp"
#include "Form.hpp"
#include <string>

typedef Form *(*t_create_form)(const std::string&);

Intern::Intern() {}
Intern::Intern(const Intern &cpy) {*this = cpy;}
Intern::~Intern() {}
Intern& Intern::operator = (const Intern&){return (*this);}

Form* make_shrubbery(std::string const& target) {
	return new ShrubberyCreationForm(target);
}

Form* make_robotomy(std::string const& target) {
	return new RobotomyRequestForm(target);
}

Form* make_presidential(std::string const& target) {
	return new PresidentialPardonForm(target);
}

Form*	Intern::makeForm(const std::string& formname, const std::string& formtarget) const {
	bool found = false;
	const std::string types[3] = {	"Presidential Pardon",
									"Robotomy Request",
									"Shrubbery Creation"};
	static t_create_form createForm[3] = { make_presidential, make_robotomy, make_shrubbery};

	for (int i = 0; i < 3; i++) {
		if (formname == types[i]) {
			found = true;
			return createForm[i](formtarget);
		}
	}
	if (!found)
		throw WrongFormException();
	return NULL;
}

Intern::WrongFormException::WrongFormException(void){}
Intern::WrongFormException::WrongFormException(const WrongFormException &cpy){*this = cpy;}
Intern::WrongFormException::~WrongFormException(void)throw(){}

Intern::WrongFormException& Intern::WrongFormException::operator = (const WrongFormException&){return (*this);}
const char* Intern::WrongFormException::what() const throw() {return ("Error : Creation File  exception !");}
