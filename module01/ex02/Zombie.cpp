#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type)
{
	this->_name = name;
	this->_type = type;
	this->announce();
}

Zombie::~Zombie()
{

}

void	Zombie::advert(void)
{
	std::cout << this->_name << " (" << this->_type << ") Braiiiiiiinnnssss ..." << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << "Name " << this->_name << "  Type " << this->_type << std::endl;
}
