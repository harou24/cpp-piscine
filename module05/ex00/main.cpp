#include "Bureaucrat.hpp"

int main(void)
{
		Bureaucrat b = Bureaucrat("Hello_world", 75);
		Bureaucrat b2 = Bureaucrat("Cool_stuff", 75);



		//Bureaucrat test = Bureaucrat("Test_too_low", 151);
		//Bureaucrat test2 = Bureaucrat("test_too_high", 0);

	for (int i = 0; i < 100; i++)
	{
		try
		{
			b.increment();
			std::cout << b;
		}
		catch(std::exception &e)
		{
			std::cout << b << ":" << e.what() << std::endl;
		}

		std::cout << "_____________________________________________\n";

		try
		{
			b2.decrement();
			std::cout << b2;
		}
		catch(std::exception &e)
		{
			std::cout << b2 << ":" <<e.what() << std::endl;
		}
			
	}
	return (0);
}
