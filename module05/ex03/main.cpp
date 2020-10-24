#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
	Bureaucrat b("Jeff--B", 25);
	Bureaucrat d("Elon--M", 140);
	Bureaucrat g("Bill--G", 4);
	
	Intern i;

	Form *AsciiTree = i.makeForm("Shrubbery Creation", "merry christmas");
	Form *hello = i.makeForm("Shrubbery Creation", "hello");
	b.executeForm(*AsciiTree);
	d.signForm(*hello);
	d.executeForm(*hello);
	g.executeForm(*hello);

	try
	{
		hello->execute(d);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::srand(time(0));
	Form *robot = i.makeForm("Robotomy Request", "Robotic");
	b.executeForm(*robot);
	std::cout << b.getName() <<" ------signing for : ->>>>> " << robot->getName() << std::endl;
	b.signForm(*robot);
	b.executeForm(*robot);
	try
	{
		d.signForm(*robot);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	Form *last = i.makeForm("Presidential Pardon", "Obama-B");
	g.signForm(*last);
	b.executeForm(*last);
	g.executeForm(*last);
while (1){}
	return (0);
}

