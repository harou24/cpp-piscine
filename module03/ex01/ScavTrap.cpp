#include "ScavTrap.hpp"
#include <ctime>
std::string ScavTrap::_randomChall[10] = {
											"Run a marathon.",
											"Take on a charity challenge.",
											"Exercise your brain.",
											"Surprise yourself.",
											"Volunteer yourself.",
											"Get a new job/seek promotion.",
											"Overcome a fear.",
											"Join A Sports Club",
											"Climb a famous peak.",
											"Get Others Up For A Challenge"

};

ScavTrap::ScavTrap(void)
{
	std::cout << "Ready to go?" << std::endl;
	this->_name = "default-name";
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 50;
	this->_maxEnergyPoints = 50;
	this->_level = 1;
	this->_meleeAttackDamage = 20;
	this->_rangedAttackDamage = 15;
	this->_armorReduction = 3;
	std::cout << "Object has been constructed !\n" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "Ready to go?" << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 50;
	this->_maxEnergyPoints = 50;
	this->_level = 1;
	this->_meleeAttackDamage = 20;
	this->_rangedAttackDamage = 15;
	this->_armorReduction = 3;
	std::cout << "Object has been constructed !\n" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &ft)
{
	std::cout << "Ideas have consequences, and totally erroneous ideas are likely to have destructive consequences." << std::endl;
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

ScavTrap::~ScavTrap()
{
	std::cout << "OH GOD NO I WON'T! " << std::endl;
	std::cout << "Object has been destructed !" << std::endl;
}

void ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at melee, causing " << this->_meleeAttackDamage << " points of damage! " << std::endl;
	
}

void ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at range, causing " << this->_rangedAttackDamage << " points of damage! " << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
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

void ScavTrap::beRepaired(unsigned int amount)
{
        int old = this->_hitPoints;
        this->_hitPoints += amount;
        if (this->_hitPoints > this->_maxHitPoints)
                this->_hitPoints = this->_maxHitPoints;
        std::cout << this->_name << " has been repaired by " << this->_hitPoints - old << std::endl;
}

void ScavTrap::challengeNewcomer(void)
{
	int index = std::rand() % 10;
	std::cout << "INDEX ->" << index << std::endl;
	std::cout << "Challenge" << ScavTrap::_randomChall[index] << std::endl;
}

 int ScavTrap::getArmorReduction() const
{
	return (this->_armorReduction);
}

std::string ScavTrap::getName() const
{
	return (this->_name);
}

void ScavTrap::display() const
{
	std::cout << this->_name << " : " << std::endl;
	std::cout << "HP->" << this->_hitPoints << std::endl;
	std::cout << "Energy->" << this->_energyPoints << "\n\n" <<std::endl;
}

bool ScavTrap::isDead() const
{
	if (this->_hitPoints == 0)
		return true;
	else
		return false;
}

 int ScavTrap::getMeleeAttack() const
{
	return (this->_meleeAttackDamage);
}

 int ScavTrap::getRangedAttack() const
{
	return (this->_rangedAttackDamage);
}

ScavTrap& ScavTrap::operator = (const ScavTrap &ft)
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
