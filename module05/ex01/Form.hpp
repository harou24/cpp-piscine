#ifndef FORM_H_
# define FORM_H_

# include "Bureaucrat.hpp"

class Bureaucrat;
class Form {

	private :
			const std::string 	_name;
			bool				_isSigned;
			const int			_toSign;
			const int			_toExecute;

	public :
			Form(void);
			Form(std::string name, int toSign, int toExecute);
			Form(const Form &f);
			~Form(void);

			Form& operator = (const Form &f);

			std::string 	 	getName(void) const;
			bool				getIsSigned(void) const;
			int					getToSign(void) const;
			int					getToExecute(void) const;

			void				beSigned(Bureaucrat &b);

			//Nested class to handle exceptions

			class GradeTooHighException : public std::exception
			{
				public :
						GradeTooHighException(void);
						GradeTooHighException(const GradeTooHighException &cpy);
						~GradeTooHighException(void) throw();

						GradeTooHighException& operator = (const GradeTooHighException &old);

						virtual const char* what() const throw();
			};

			class GradeTooLowException : public std::exception
			{
				public :
						GradeTooLowException(void);
						GradeTooLowException(const GradeTooLowException &cpy);
						~GradeTooLowException(void) throw();

						GradeTooLowException& operator = (const GradeTooLowException &old);

						virtual const char* what() const throw();
			};

			class AlreadySignedException : public std::exception
			{
				public :
						AlreadySignedException(void);
						AlreadySignedException(const AlreadySignedException &cpy);
						~AlreadySignedException(void) throw();

						AlreadySignedException& operator = (const AlreadySignedException &old);

						virtual const char* what() const throw();
			};
};

std::ostream& operator << (std::ostream &output, const Form &f);

#endif
