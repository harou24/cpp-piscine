#include "Character.hpp"

Character::Character(void)
{
	this->_name = "Hello_wolrd";
	this->_aP = 40;
	this->_weapon = NULL;
}

Character::Character(std::string const &name)
{
	this->_name = name;
	this->_aP = 40;
	this->_weapon = NULL;
}

Character::Character(const Character &c)
{
	*this = c;
}

Character::~Character()
{

}

Character& operator = (const Character &c)
{
	this->_name = c->_name;
	this->_aP = c->_aP;
	this_weapon = c->_weapon;
}

void Character::recoverAP(void)
{

}

void Character::equip(AWeapon *w)
{

}

void Character::attack(Enemy *e)
{

}

std::string const getName(void) const 
{

}
