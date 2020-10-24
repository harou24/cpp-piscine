#include "RobotomyRequestForm.hpp"
#include <fstream>

RobotomyRequestForm::RobotomyRequestForm(void) : Form(){}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : Form("RobotomyRequestForm", 72, 45) {
	this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &cpy) : Form(cpy) {}

RobotomyRequestForm::~RobotomyRequestForm(void) {}

RobotomyRequestForm& RobotomyRequestForm::operator = (const RobotomyRequestForm&)
{
	return (*this);
}

std::string RobotomyRequestForm::getTarget(void) const
{
	return this->_target;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	Form::execute(executor);
	int val = std::rand() % 2;
	std::cout << "* Drrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr... *" << std::endl;
	if (val == 0)
		std::cout << this->_target << " has been robotomized successfully !" << std::endl;
	else
		std::cout << this->_target << " failed to robotomized !" << std::endl;
}
