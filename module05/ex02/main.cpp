#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	Bureaucrat b("Jeff--B", 25);
	Bureaucrat d("Elon--M", 140);
	Bureaucrat g("Bill--G", 4);

	ShrubberyCreationForm AsciiTree("merry christmas");
	ShrubberyCreationForm hello("hello");
	b.executeForm(AsciiTree);
	d.signForm(hello);
	d.executeForm(hello);
	g.executeForm(hello);

	try
	{
		hello.execute(d);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::srand(time(0));
	RobotomyRequestForm robot("Robotic");
	b.executeForm(robot);
	std::cout << b.getName() <<" ------signing for : ->>>>> " << robot.getName() << std::endl;
	b.signForm(robot);
	b.executeForm(robot);
	try
	{
		d.signForm(robot);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	PresidentialPardonForm last("Obama-B");
	g.signForm(last);
	b.executeForm(last);
	g.executeForm(last);

	return (0);
}

