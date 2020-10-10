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
	std::cout << "Object has been destructed !" << std::endl;
}

void ScavTrap::challengeNewcomer(void)
{
	int index = std::rand() % 10;
	std::cout << "INDEX ->" << index << std::endl;
	std::cout << "Challenge" << ScavTrap::_randomChall[index] << std::endl;
}

