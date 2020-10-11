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

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 100, 100, 1, 30, 20, 5)
{
		
	std::cout << "Let's get this party started!" << std::endl;
	std::cout << "Object has been constructed !\n" << std::endl;
}

FragTrap::FragTrap(const FragTrap &ft) : ClapTrap(ft)
{
	std::cout << "I bet your mom could do better!" << std::endl;
	std::cout << "Object has been constructed !\n" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "You can't kill me!" << std::endl;
	std::cout << "Object has been destructed !\n" << std::endl;
}

int FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	if (this->getEnergyPoints() < 25)
	{
		std::cout << "Out of energy\n" << std::endl;
		return -1;
	}

	int index = std::rand() % 10;
	std::cout << "INDEX ->" << index << std::endl;
	std::cout << FragTrap::_randomAttack[index] << " Attack on  -> " << target << std::endl;
	std::cout << this->getName() << " has used 25 energy to run special attack !\n" << std::endl;
	this->setEnergyPoints(this->getEnergyPoints() - 25);
	return (index);
}

FragTrap& FragTrap::operator = (const FragTrap &ft)
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
