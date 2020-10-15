#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void) : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion &e) : Enemy(e)
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion(void)
{
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion& RadScorpion::operator = (const RadScorpion &e)
{
	this->setType(e.getType());
	this->setHP(e.getHP());
	return (*this);
}

void RadScorpion::takeDamage(int val){
	this->setHP(this->getHP() - (val + 3));
}
