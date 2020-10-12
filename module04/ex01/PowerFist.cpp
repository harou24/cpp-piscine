#include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon("Power Fist", 50, 8){}

PowerFist::PowerFist(const PowerFist &pr) : AWeapon(pr){}

PowerFist::~PowerFist(void){}

PowerFist& PowerFist::operator = (const PowerFist &pr)
{
	this->setName(pr.getName());
	this->setDamage(pr.getDamage());
	this->setAPCost(pr.getAPCost());
	return (*this);
}

void PowerFist::attack(void) const
{
	std::cout <<  "* pschhh... SBAM! *" << std::endl;
}
