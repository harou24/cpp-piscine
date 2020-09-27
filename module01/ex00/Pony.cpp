#include "Pony.hpp"

Pony::Pony(std::string name)
{
	this->name = name;
	std::cout << "Pony created : "<< name << "." << std::endl;
}

Pony::~Pony(void)
{
	std::cout << "Poney destruction : " << this->name << "." << std::endl;
}

void	Pony::feed(std::string food)
{
	std::cout << this->name << " is eating " << food << "." <<std::endl;
}

void    ponyOnTheStack()
{
        Pony *p1 = new Pony("PonyOne");
        p1->feed("grass");
}

void    ponyOnTheHeap()
{
        Pony *p2 = new Pony("PonyTwo");
        p2->feed("Carrot");
}

int             main(void)
{
		ponyOnTheStack();
		ponyOnTheHeap();
        return (0);
}
