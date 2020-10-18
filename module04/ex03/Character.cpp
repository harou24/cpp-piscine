#include "Character.hpp"

Character::Character(void){}

Character::Character(const std::string &name)
{
	this->_name = name;
	this->_slot = 0;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(const Character &c)
{
	*this = c;
}

Character::~Character(void){}

Character& Character::operator = (const Character &c)
{
	this->_name = c._name;
	this->_slot = c._slot;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = c._inventory[i].clone();
	return (*this);
}

std::string const & Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
		if (this->_inventory[i] == NULL)
			this->_inventory[i] = m;
}

void Character::unequip(int idx)
{
	if (idx >= 0 && odx < 4)
		this->_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >=0 && idx < 4)
		if (this->_inventory[idx] != NULL)
			this->_inventory[idx]->use(target);

}
