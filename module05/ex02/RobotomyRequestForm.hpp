#ifndef ROBOTOMY_REQUEST_FORM_H_
# define ROBOTOMY_REQUEST_FORM_H_

# include "Form.hpp"
# include "Bureaucrat.hpp"

class Bureaucrat;

class RobotomyRequestForm : public Form {
		
	private : 
			std::string _target;
	public :
			RobotomyRequestForm(void);
			RobotomyRequestForm(const std::string &target);
			RobotomyRequestForm(const RobotomyRequestForm &cpy);
			~RobotomyRequestForm(void);

			RobotomyRequestForm& operator = (const RobotomyRequestForm &old);
			
			std::string getTarget(void) const;
			void execute(Bureaucrat const & executor) const;
};

#endif
