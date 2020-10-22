#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("default"), _grade(150){}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name){
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &b)
{
	*this = b;
}

Bureaucrat::~Bureaucrat(void)
{
	
}

Bureaucrat& Bureaucrat::operator = (const Bureaucrat &b)
{
	this->_grade = b.getGrade();
	return (*this);
}

const std::string Bureaucrat::getName(void) const 
{
	return (this->_name);
}

int Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void Bureaucrat::increment()
{
	if (this->_grade == 1)
		throw GradeTooHighException();
	this->_grade -= 1;
}

void Bureaucrat::decrement()
{
	if (this->_grade == 150)
		throw GradeTooLowException();
	this->_grade += 1;
}

std::ostream& operator << (std::ostream &output, const Bureaucrat &b)
{
	output << b.getName() << ", bureaucrat grade." << b.getGrade() << std::endl;
	return (output);
}

Bureaucrat::GradeTooHighException::GradeTooHighException(void){}
Bureaucrat::GradeTooHighException::GradeTooHighException(const GradeTooHighException &cpy){*this = cpy;}
Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw(){}

Bureaucrat::GradeTooHighException& Bureaucrat::GradeTooHighException::operator = (const GradeTooHighException&){return (*this);}
const char* Bureaucrat::GradeTooHighException::what() const throw() {return ("Error : Too high grade exception !");}

Bureaucrat::GradeTooLowException::GradeTooLowException(void){}
Bureaucrat::GradeTooLowException::GradeTooLowException(const GradeTooLowException &cpy){*this = cpy;}
Bureaucrat::GradeTooLowException::~GradeTooLowException(void)throw(){}

Bureaucrat::GradeTooLowException& Bureaucrat::GradeTooLowException::operator = (const GradeTooLowException&){return (*this);}
const char* Bureaucrat::GradeTooLowException::what() const throw() {return ("Error : Too low grade exception !");}
