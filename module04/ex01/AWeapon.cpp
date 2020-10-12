#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const &name, int apcost, int damage)
{
	this->_name = name;
	this->_damage = damage;
	this->_ap = apcost;
}


AWeapon::AWeapon(const AWeapon &w)
{
	*(this) = w;
}


AWeapon::~AWeapon()
{

}

AWeapon& AWeapon::operator = (const AWeapon &ft)
{
	this->_name = ft._name;
	this->_damage = ft._damage;
	this->_ap = ft._ap;
	return (*this);
}

std::string const AWeapon::getName() const
{
	return (this->_name);
}

int  AWeapon::getAPCost() const
{
	return(this->_ap);
}

int AWeapon::getDamage() const
{
	return (this->_damage);
}

void AWeapon::setName(std::string name)
{
	this->_name = name;
}

void AWeapon::setDamage(unsigned int value)
{
	this->_damage = value;
}

void AWeapon::setAPCost(unsigned int value)
{
	this->_ap = value;
}
