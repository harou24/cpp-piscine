#include "Form.hpp"

Form::Form(void) : _name("default"), _isSigned(false), _toSign(0), _toExecute(0) {}

Form::Form(std::string name, int toSign, int toExecute) : _name(name), _isSigned(false), _toSign(toSign), _toExecute(toExecute) 
{
	if (this->_toSign < 1 || this->_toExecute < 1)
		throw GradeTooHighException();
	else if (this->_toSign > 150 || this->_toExecute > 150)
		throw GradeTooLowException();
}

Form::Form(const Form &f) : _name(f.getName()), _isSigned(f.getIsSigned()), _toSign(f.getToSign()), _toExecute(f.getToExecute())
{

}

Form::~Form(void) {}

Form& Form::operator = (const Form &f)
{
	this->_isSigned = f.getIsSigned();
	return (*this);
}

std::string Form::getName(void) const 
{
	return (this->_name);
}

bool Form::getIsSigned(void) const
{
	return (this->_isSigned);
}

int Form::getToSign(void) const
{
	return (this->_toSign);
}

int Form::getToExecute(void) const
{
	return (this->_toExecute);
}

void Form::beSigned(Bureaucrat &b)
{
	if (this->_isSigned)
		throw AlreadySignedException();
	if (this->_toSign < b.getGrade())
		throw GradeTooLowException();
	this->_isSigned = true;
}

void Form::execute(Bureaucrat const & executor) const
{
	if (!this->_isSigned)
		throw GradeNotSignedException();
	if (executor.getGrade() > this->_toExecute)
		throw GradeTooLowException();
}

std::ostream& operator << (std::ostream &output, const Form &f)
{
	output << "----Form----\nName : " << f.getName() << "\nIs it Signed : " << f.getIsSigned() << "\nTo Sign :" << f.getToSign()
		   << "\nTo Execute : " << f.getToExecute() << std::endl;
		return (output);
}

Form::GradeTooHighException::GradeTooHighException(void){}
Form::GradeTooHighException::GradeTooHighException(const GradeTooHighException &cpy){*this = cpy;}
Form::GradeTooHighException::~GradeTooHighException(void) throw(){}

Form::GradeTooHighException& Form::GradeTooHighException::operator = (const GradeTooHighException&){return (*this);}
const char* Form::GradeTooHighException::what() const throw() {return ("Error : Too high grade exception !");}

Form::GradeTooLowException::GradeTooLowException(void){}
Form::GradeTooLowException::GradeTooLowException(const GradeTooLowException &cpy){*this = cpy;}
Form::GradeTooLowException::~GradeTooLowException(void)throw(){}

Form::GradeTooLowException& Form::GradeTooLowException::operator = (const GradeTooLowException&){return (*this);}
const char* Form::GradeTooLowException::what() const throw() {return ("Error : Too low grade exception !");}

Form::AlreadySignedException::AlreadySignedException(void){}
Form::AlreadySignedException::AlreadySignedException(const AlreadySignedException &cpy){*this = cpy;}
Form::AlreadySignedException::~AlreadySignedException(void)throw(){}

Form::AlreadySignedException& Form::AlreadySignedException::operator = (const AlreadySignedException&){return (*this);}
const char* Form::AlreadySignedException::what() const throw() {return ("Error : Already Signed exception !");}

Form::GradeNotSignedException::GradeNotSignedException(void){}
Form::GradeNotSignedException::GradeNotSignedException(const GradeNotSignedException &cpy){*this = cpy;}
Form::GradeNotSignedException::~GradeNotSignedException(void)throw(){}

Form::GradeNotSignedException& Form::GradeNotSignedException::operator = (const GradeNotSignedException&){return (*this);}
const char* Form::GradeNotSignedException::what() const throw() {return ("Error : Grade not Signed exception !");}

