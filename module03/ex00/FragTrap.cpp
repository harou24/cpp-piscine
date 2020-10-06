#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(std::string name)
{
	std::cout << "Let's get this party started!" << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_maxHitsPoints = 100;
	this->_energyPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_level = 1;
	this->_meleeAtackDamage = 30;
	this->_rangedAttackDamage = 20;
	this->_armorReduction = 5;
	std::cout << "Object has been constructed !" << std::endl;
}

FragTrap::FragTrap(const FragTrap &ft)
{
	std::cout << "I bet your mom could do better!" << std::endl;
	this->_name = ft.getName();
	this->_hitPoints = ft.getHitPoints();
	this->_maxHitsPoints = ft.getMaxHitPoints();
	this->_energyPoints = ft.getErnergyPoints();
	this->_maxEnergyPoints = ft.getMaxEnergyPoints();
	this->_level = ft.getLevel();
	this->_meleeAtackDamage = ft.getMeleeAtackDamage();
	this->_rangedAttackDamage = ft.getRangedAtackDamage();
	this->_armorReduction = ft.getArmorReduction();
	std::cout << "Object has been constructed !" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "You can't kill me!" << std::endl;
	std::cout << "Object has been destructed !" << std::endl;
}

void FragTrap::meleeAttack(std:: const &target)
{
	target.takeDamage(this->_meleeAtackDamage - target.getArmorReduction());
	std::cout << "FR4G-TP " << this->_name << " attacks " << target->getName() << "at melee, causing " << damage << " points of damage! " << std::endl;
}

void FragTrap::rangedAttack(std::string const &target)
{
	target.takeDamage(this->_rangedAtackDamage - target.getArmorReduction());
	std::cout << "FR4G-TP " << this->_name << " attacks " << target->getName() << "at range, causing " << damage << " points of damage! " << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	if (this->_energyPoints - amount >= 0)
		this->_energyPoints -= amount;
	else
		this->_energyPoints = 0;
}

void FragTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints + amount <= this->_maxEnergyPoints)
		this->_energyPoints += amount;
	else
		this->_energyPoints = this->_maxEnergyPoints;
}
