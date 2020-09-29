#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name)
{
	this->_name = name;
}

HumanB::~HumanB(){}

void	HumanB::attack() const
{
	std::cout << this->_name << " Attacks with his " << this->_w->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &w)
{
	this->_w = &w;
}
