#include "Intern.hpp"
#include "Form.hpp"
#include <string>

Form* new_shrub(std::string const& target) {
	return new ShrubberyCreationForm(target);
}

Form* new_pardon(std::string const& target) {
	return new PresidentialPardonForm(target);
}

Form* new_robo(std::string const& target) {
	return new RobotomyRequestForm(target);
}

typedef Form *(*t_make_funct)(const std::string&);

Intern::Intern() {}

Intern::~Intern() {}

Form*	Intern::makeForm(const std::string& formname, const std::string& formtarget) const {
	const std::string types[3] = {	"Presidential Pardon",
									"Robotomy Request",
									"Shrubbery Creation"};
	static t_make_funct makeFormFuncts[3] = { new_pardon, new_robo, new_shrub};

	for (int i = 0; i < 3; i++) {
		if (formname == types[i]) {
			std::cout << "Intern creates " << formname << "." << std::endl;
			return makeFormFuncts[i](formtarget);
		}
	}
	std::cout << "No such formname found." << std::endl;
	return NULL;
}

Intern::WrongFormException::WrongFormException(void){}
Intern::WrongFormException::WrongFormException(const WrongFormException &cpy){*this = cpy;}
Intern::WrongFormException::~WrongFormException(void)throw(){}

Intern::WrongFormException& Intern::WrongFormException::operator = (const WrongFormException&){return (*this);}
const char* Intern::WrongFormException::what() const throw() {return ("Error : Creation File  exception !");}
