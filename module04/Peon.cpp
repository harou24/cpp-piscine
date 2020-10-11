#include "Peon.hpp"

Peon::Peon() : Victim()
{
	std::cout << "Zog zog." << std::endl;

}

Peon::Peon(std::string name) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(const Peon &p) : Victim(p)
{
	*this = p;
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

void Peon::getPolymorphed() const
{
	std::cout << this->getName() << " has been turned into a pink pony!" << std::endl;
}

Peon& Peon::operator = (const Peon &p)
{
        std::cout << "Assignation operator called" << std::endl;
        this->setName(p.getName());
        return (*this);
}
