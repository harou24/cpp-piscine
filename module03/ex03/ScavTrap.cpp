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

ScavTrap::ScavTrap() : ClapTrap(){};

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 100, 50, 50, 1, 20, 15, 3)
{
	std::cout << "Ready to go?" << std::endl;
	std::cout << "Object has been constructed !\n" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &ft) : ClapTrap(ft)
{
	std::cout << "Ideas have consequences, and totally erroneous ideas are likely to have destructive consequences." << std::endl;
	std::cout << "Object has been constructed !\n" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "OH GOD NO I WON'T! " << std::endl;
	std::cout << "Object has been destructed !\n" << std::endl;
}

void ScavTrap::challengeNewcomer(void)
{
	int index = std::rand() % 10;
	std::cout << "INDEX ->" << index << std::endl;
	std::cout << "Challenge" << ScavTrap::_randomChall[index] << "\n" <<std::endl;
	this->beRepaired(3);
}

ScavTrap& ScavTrap::operator = (const ScavTrap &ft)
{
    std::cout << "Assignation operator called" << std::endl;
	this->setName(ft.getName());
	this->setHitPoints(ft.getHitPoints());
	this->setHitMaxPoints(ft.getHitMaxPoints());
	this->setEnergyPoints(ft.getEnergyPoints());
	this->setMaxEnergyPoints(ft.getMaxEnergyPoints());
	this->setLevel(ft.getLevel());
	this->setMeleeAttack(ft.getMeleeAttack());
	this->setRangedAttack(ft.getRangedAttack());
	this->setArmorReduction(ft.getArmorReduction());
    return (*this);
}
