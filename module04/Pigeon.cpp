#include "Pigeon.hpp"

Pigeon::Pigeon() : Victim()
{
	std::cout << "Pigeon Pigeon" << std::endl;

}

Pigeon::Pigeon(std::string name) : Victim(name)
{
	std::cout << "Pigeon Pigeon." << std::endl;
}

Pigeon::Pigeon(const Pigeon &p) : Victim(p)
{
	*this = p;
	std::cout << "Pigeon Pigeon" << std::endl;
}

Pigeon::~Pigeon()
{
	std::cout << "Bye Pigeon" << std::endl;
}

void Pigeon::getPolymorphed() const
{
	std::cout << this->getName() << " has been turned into a blue Pigeon" << std::endl;
}

Pigeon& Pigeon::operator = (const Pigeon &p)
{
        std::cout << "Assignation operator called" << std::endl;
        this->setName(p.getName());
        return (*this);
}
