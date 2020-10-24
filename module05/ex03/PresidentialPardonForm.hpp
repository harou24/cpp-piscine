#ifndef PRESIDENTIAL_PARDON_FORM_H_
# define PRESIDENTIAL_PARDON_FORM_H_

# include "Form.hpp"
# include "Bureaucrat.hpp"

class Bureaucrat;

class PresidentialPardonForm : public Form {
		
	private : 
			std::string _target;
	public :
			PresidentialPardonForm(void);
			PresidentialPardonForm(const std::string &target);
			PresidentialPardonForm(const PresidentialPardonForm &cpy);
			~PresidentialPardonForm(void);

			PresidentialPardonForm& operator = (const PresidentialPardonForm &old);
			
			std::string getTarget(void) const;
			void execute(Bureaucrat const & executor) const;
};

#endif
