#include "FragTrap.hpp"
#include <ctime>

std::string FragTrap::_randomAttack[10] = {
											"There's more to learn!",
											"Let me teach you the ways of magic!",
											"Magic waits for no one, apprentice!",
											"Shouldn't you be murdering something about now?",
											"Hey! You're TALKING to me! And I didn't even have an exclamation point over my head! This is the BEST day of my life!",
											"Hocus pocus!",
											"Sweet life juice!",
											"I found health!",
											"Watch as we observe the rare and beautiful Clappy Bird!",
											"RUN FOR YOUR LIIIIIVES!!!"

};

FragTrap::FragTrap()
{
	std::cout << "Let's get this party started!" << std::endl;
	this->_name = "Default_name";
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_level = 1;
	this->_meleeAttackDamage = 30;
	this->_rangedAttackDamage = 20;
	this->_armorReduction = 5;
	std::cout << "Object has been constructed !\n" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "Let's get this party started!" << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_level = 1;
	this->_meleeAttackDamage = 30;
	this->_rangedAttackDamage = 20;
	this->_armorReduction = 5;
	std::cout << "Object has been constructed !\n" << std::endl;
}

FragTrap::FragTrap(const FragTrap &ft)
{
	std::cout << "I bet your mom could do better!" << std::endl;
	this->_name = ft._name;
	this->_hitPoints = ft._hitPoints;
	this->_maxHitPoints = ft._maxHitPoints;
	this->_energyPoints = ft._energyPoints;
	this->_maxEnergyPoints = ft._maxEnergyPoints;
	this->_level = ft._level;
	this->_meleeAttackDamage = ft._meleeAttackDamage;
	this->_rangedAttackDamage = ft._rangedAttackDamage;
	this->_armorReduction = ft._armorReduction;
	std::cout << "Object has been constructed !\n" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "You can't kill me!" << std::endl;
	std::cout << "Object has been destructed !" << std::endl;
}

void FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at melee, causing " << this->_meleeAttackDamage << " points of damage! " << std::endl;
	
}

void FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at range, causing " << this->_rangedAttackDamage << " points of damage! " << std::endl;
}

void FragTrap::takeDamage( unsigned int amount)
{
	int old = this->_hitPoints;
	int armRed = amount - this->_armorReduction;
		if (armRed < 0)
			armRed = 1;
	this->_hitPoints -= armRed;
	if (this->_hitPoints < 0)
		this->_hitPoints = 0;
	std::cout << this->_name << " has been damaged by " << old - this->_hitPoints << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
	int old = this->_hitPoints;
	this->_hitPoints += amount;
	if (this->_hitPoints > this->_maxHitPoints)
		this->_hitPoints = this->_maxHitPoints;
	std::cout << this->_name << " has been repaired by " << this->_hitPoints - old << std::endl;
}

int FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	if (this->_energyPoints < 25)
	{
		std::cout << "Out of energy" << std::endl;
		return -1;
	}

	int index = std::rand() % 10;
	std::cout << "INDEX ->" << index << std::endl;
	std::cout << FragTrap::_randomAttack[index] << " Attack on  -> " << target << std::endl;
	std::cout << this->_name << " has used 25 energy to run special attack !" << std::endl;
	this->_energyPoints -= 25;
	return (index);
}

 int FragTrap::getArmorReduction() const
{
	return (this->_armorReduction);
}

std::string FragTrap::getName() const
{
	return (this->_name);
}

void FragTrap::display() const
{
	std::cout << this->_name << " : " << std::endl;
	std::cout << "HP->" << this->_hitPoints << std::endl;
	std::cout << "Energy->" << this->_energyPoints << "\n\n" <<std::endl;
}

bool FragTrap::isDead() const
{
	if (this->_hitPoints == 0)
		return true;
	else
		return false;
}

 int FragTrap::getMeleeAttack() const
{
	return (this->_meleeAttackDamage);
}

 int FragTrap::getRangedAttack() const
{
	return (this->_rangedAttackDamage);
}

FragTrap& FragTrap::operator = (const FragTrap &ft)
{
    std::cout << "Assignation operator called" << std::endl;
	this->_name = ft._name;
	this->_hitPoints = ft._hitPoints;
	this->_maxHitPoints = ft._maxHitPoints;
	this->_energyPoints = ft._energyPoints;
	this->_maxEnergyPoints = ft._maxEnergyPoints;
	this->_level = ft._level;
	this->_meleeAttackDamage = ft._meleeAttackDamage;
	this->_rangedAttackDamage = ft._rangedAttackDamage;
	this->_armorReduction = ft._armorReduction;
    return (*this);
}
