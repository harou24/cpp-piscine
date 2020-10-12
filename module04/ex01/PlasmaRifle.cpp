#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) : AWeapon("Plasma Rifle", 21, 5){}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &pr) : AWeapon(pr){}

PlasmaRifle::~PlasmaRifle(void){}

PlasmaRifle& PlasmaRifle::operator = (const PlasmaRifle &pr)
{
	this->setName(pr.getName());
	this->setDamage(pr.getDamage());
	this->setAPCost(pr.getAPCost());
	return (*this);
}

void PlasmaRifle::attack(void) const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
