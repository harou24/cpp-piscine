#include "Character.hpp"
#include <string>
#include <sstream>
Character::Character(void)
{
	this->_name = "Hello_world";
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

Character::~Character(){}

Character& Character::operator = (const Character &c)
{
	this->_name = c._name;
	this->_aP = c._aP;
	this->_weapon = c._weapon;
	return (*this);
}

void Character::recoverAP(void)
{
	if	(this->_aP + 10 < 40)
		this->_aP += 10;
	else
		this->_aP = 40;
}

void Character::equip(AWeapon *w)
{
	this->_weapon = w;
}

void Character::attack(Enemy *e)
{
	if (this->_weapon == NULL)
	{
		std::cout << "NOT equipped Weapon !" << std::endl;
		return ;
	}
	if (this->_aP-this->_weapon->getAPCost()  > 0)
	{
		this->_aP -= this->_weapon->getAPCost();
		std::cout << this->_name << " attacks " << e->getType() << " with a " << this->_weapon->getName() << std::endl;
		this->_weapon->attack();
		e->takeDamage(this->_weapon->getDamage());
		if (e->getHP() == 0)
			delete(e);
		if (this->_aP == 0)
			delete (this->_weapon);
	}
	else
	{
		this->_aP = 0;
		std::cout << "NOT enough Action Points to attack !" << std::endl;

	}
}

std::string const Character::getName(void) const 
{
	return (this->_name);
}

 int Character::getAP() const
{
	return (this->_aP);
}

AWeapon* Character::getWeapon() const
{
	return (this->_weapon);
}

std::ostream& operator << (std::ostream &output, const Character &c)
{
	std::stringstream res;
	if (c.getWeapon() == NULL)	
		res << c.getName() << " has " << c.getAP() << " AP and is unarmed\n";
	else
		res << c.getName() << " has " << c.getAP() << " AP and wields a " << c.getWeapon()->getName() << "\n";
	output << res.str();
	return (output);
}
