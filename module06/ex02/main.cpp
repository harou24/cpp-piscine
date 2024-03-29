#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
	int	rand_nb = rand() % 3;
	if (rand_nb == 0)
	{
		std::cout << "generate A" << std::endl;
		return (new A());
	}
	else if (rand_nb == 1)
	{
		std::cout << "generate B" << std::endl;
		return (new B());
	}
	else if (rand_nb == 2)
	{
		std::cout << "generate C" << std::endl;
		return (new C());
	}
	else
		std::cout << "generate failed!" << std::endl; 
	return (NULL);
}

void identify_from_pointer( Base * p )
{
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "not one of A, B, C" << std::endl;
}

void identify_from_reference( Base & p )
{
	if (dynamic_cast<A *>(&p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(&p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(&p))
		std::cout << "C" << std::endl;
	else
		std::cout << "not one of A, B, C" << std::endl;
}

int	main(void)
{
	srand(static_cast<unsigned int>(time(NULL)));
	Base	*base;

	for (int i = 0; i < 3; i++)
	{
		base = generate();
		identify_from_pointer(base);
		identify_from_reference(*base);
		delete base;
	}
}
