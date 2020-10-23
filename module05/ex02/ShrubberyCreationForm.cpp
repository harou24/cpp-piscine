#include "ShrubberyCreationForm.hpp"
#include <fstream>
ShrubberyCreationForm::ShrubberyCreationForm(void) : Form(){}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : Form("ShrubberyCreationForm", 145, 137) {
	this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &cpy) : Form(cpy) {}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

ShrubberyCreationForm& ShrubberyCreationForm::operator = (const ShrubberyCreationForm&)
{
	return (*this);
}

std::string ShrubberyCreationForm::getTarget(void) const
{
	return this->_target;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	Form::execute(executor);
	std::oftream output(this->target + "_shrubbery");
	if (!output)
		exit(0); // to do exception

	
	output << "							     /\      		 " << std::endl <<
			  "								<  >     		 " << std::endl <<
			  "								 \/      		 " << std::endl <<
			  "								 /\      		 " << std::endl <<
			  "								/  \     		 " << std::endl <<
			  "							   /++++\    		 " << std::endl <<
			  "							  /  ()  \   		 " << std::endl <<
			  "							  /      \   		 " << std::endl <<
			  "							 /~`~`~`~`\  		 " << std::endl <<
			  "							/  ()  ()  \ 		 " << std::endl <<
			  "							/          \ 		 " << std::endl <<
			  "						   /*&*&*&*&*&*&\ 		 " << std::endl <<
			  "						  /  ()  ()  ()  \   	 " << std::endl <<
			  "						  /              \		 " << std::endl <<
			  "						 /++++++++++++++++\		 " << std::endl <<
			  "						/  ()  ()  ()  ()  \	 " << std::endl <<
			  "						/                  \  	 " << std::endl <<
			  "					   /~`~`~`~`~`~`~`~`~`~`\	 " << std::endl <<
			  "					  /  ()  ()  ()  ()  ()  \ 	 " << std::endl <<
			  "					  /*&*&*&*&*&*&*&*&*&*&*&\	 " << std::endl <<
		      "					 /                        \  " << std::endl <<
			  "					/,.,.,.,.,.,.,.,.,.,.,.,.,.\ " << std::endl <<
              "							   |   |			 " << std::endl <<
			  "							  |`````|			 " << std::endl <<
			  "							  \_____/			 " << std::endl <<
			  "______________________________________________" << std::endl;

	output.close();

}
