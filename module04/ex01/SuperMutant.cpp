#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &e) : Enemy(e)
{
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::~SuperMutant(void)
{
	std::cout << "Aaargh ..." << std::endl;
}

SuperMutant& SuperMutant::operator = (const SuperMutant &e)
{
	this->setType(e.getType());
	this->setHP(e.getHP());
	return (*this);
}

void SuperMutant::takeDamage(int val){
	this->setHP(this->getHP() - (val + 3));
}
