#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
		Bureaucrat b = Bureaucrat("Hello_world", 75);
		Form f = Form("test", 74, 74);

		try 
		{
			f.beSigned(b);
			std::cout << b;
		}
		catch(std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}

		Bureaucrat b2 = Bureaucrat("Hello_world", 50);
		Form f2 = Form("test", 51, 51);

		try 
		{
			f2.beSigned(b2);
			b2.signForm(f2);
			std::cout << b2 << std::endl;
			std::cout << f2 << std::endl;
		}
		catch(std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}

		Bureaucrat b3 = Bureaucrat("Hello_world", 50);
		Form f3 = Form("test", 30, 30);

		try 
		{
			//f3.beSigned(b3);
			b3.signForm(f3);
			std::cout << f3;
		}
		catch(std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		
		Bureaucrat b4 = Bureaucrat("Hello_world", 10);	
		try 
		{
			//f3.beSigned(b3);
			b4.signForm(f3);
			std::cout << f3;
		}
		catch(std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}

		Bureaucrat b5 = Bureaucrat("Hello_world", 100);	
		try 
		{
			//f3.beSigned(b3);
			b5.signForm(f3);
			std::cout << f3;
		}
		catch(std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		return (0);
}

