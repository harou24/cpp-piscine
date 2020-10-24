#include "PresidentialPardonForm.hpp"
#include <fstream>

PresidentialPardonForm::PresidentialPardonForm(void) : Form(){}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : Form("Presidential Pardon", 25, 5) {
	this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &cpy) : Form(cpy) {}

PresidentialPardonForm::~PresidentialPardonForm(void) {}

PresidentialPardonForm& PresidentialPardonForm::operator = (const PresidentialPardonForm&)
{
	return (*this);
}

std::string PresidentialPardonForm::getTarget(void) const
{
	return this->_target;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	Form::execute(executor);
	std::cout << this->_target << "  has been pardoned by Zafod Beeblebrox." << std::endl;
}
