#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &w)
{
	this->_name = name;
	this->_w = &w;
}

HumanA::~HumanA(){}

void	HumanA::attack() const
{
	std::cout << this->_name << " Attacks with his " << this->_w->getType() << std::endl;
}
