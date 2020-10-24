#ifndef BUREAUCRAT_H_
# define BUREAUCRAT_H_

# include <iostream>
# include <stdexcept>
# include <sstream>
# include "Form.hpp"

class Form;

class Bureaucrat {

	private :
			const std::string _name;
			int _grade;
	public :
			Bureaucrat(void);
			Bureaucrat(std::string name, int grade);
			Bureaucrat(const Bureaucrat &b);
			~Bureaucrat(void);

			Bureaucrat& operator = (const Bureaucrat &b);

			const std::string getName(void) const;
			int getGrade(void) const;

			void increment();
			void decrement();

			//sign form
			void signForm(Form &f);
			//execute
			void executeForm(Form const & form) const;
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
};

std::ostream& operator << (std::ostream &output, const Bureaucrat &b);

#endif
