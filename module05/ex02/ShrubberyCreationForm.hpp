#ifndef SHRUBBERY_CREATION_FORM_H_
# define SHRUBBERY_CREATION_FORM_H_

# include "Form.hpp"
# include "Bureaucrat.hpp"

class Bureaucrat;

class ShrubberyCreationForm : public Form {
		
	private : 
			std::string _target;
	public :
			ShrubberyCreationForm(void);
			ShrubberyCreationForm(const std::string &target);
			ShrubberyCreationForm(const ShrubberyCreationForm &cpy);
			~ShrubberyCreationForm(void);

			ShrubberyCreationForm& operator = (const ShrubberyCreationForm &old);
			
			std::string getTarget(void) const;
			void execute(Bureaucrat const & executor) const;
};

#endif
