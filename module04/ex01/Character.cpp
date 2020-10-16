#include "Character.hpp"

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
	if	(this->_aP < 40)
		this->_aP += 10;
}

void Character::equip(AWeapon *w)
{
	this->_weapon = w;
	std::cout << this->_name << " has equipped with " << this->_weapon->getName() << std::endl;
}

void Character::attack(Enemy *e)
{
	if (this->_weapon == NULL)
	{
		std::cout << "NOT equipped Weapon !" << std::endl;
		return ;
	}
	if (this->_aP > 0)
	{
		this->_aP -= 10;
		std::cout << this->_name << " attacks " << e->getType() << " with a " << this->_weapon << std::endl;
		this->_weapon->attack();
		if (this->_aP == 0)
			delete (this->_weapon);
	}
	else
		std::cout << "NOT enough Action Points to attack !" << std::endl;
}

std::string const Character::getName(void) const 
{
	return (this->_name);
}

std::ostream& operator << (std::ostream &output, const Character &c)
{
	std::string res;
	if (c._weapon == NULL)	
		res = this->_name + " has " + this->_aP + " and is unarmed\n";
	else
		res = this->_name + " has " + this->aP + " and wields a " this->_weapon->getName();
	output << res;
	return (output);
}
