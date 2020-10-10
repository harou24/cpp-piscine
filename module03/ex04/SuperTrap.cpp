#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name) : ClapTrap(name, 100, 100, 120, 120, 1, 60, 20, 5), NinjaTrap(name),FragTrap(name)
{
		
	std::cout << "Hahahhaahaahhaahha" << std::endl;
	std::cout << "Object has been constructed !\n" << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap &st) : ClapTrap(st),NinjaTrap(st), FragTrap(st)
{
	std::cout << "I am back again ..." << std::endl;
	std::cout << "Object has been constructed !\n" << std::endl;
}

SuperTrap::~SuperTrap()
{
	std::cout << "I will reborn!" << std::endl;
	std::cout << "Object has been destructed !\n" << std::endl;
}

void SuperTrap::ninjaShoebox(SuperTrap &st)
{
	 if (this->getEnergyPoints() < 15)
        {
                std::cout << "Out of energy\n" << std::endl;
                return ;
        }
	std::cout << "Hello_world" << std::endl;
	std::cout << this->getName() << " has used 15 energy to run special attack !\n" << std::endl;
	this->setEnergyPoints(this->getEnergyPoints() - 15);
	st.beRepaired(10);
}

void SuperTrap::rangedAttack(std::string const &target)
{
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const &target)
{
	NinjaTrap::meleeAttack(target);
}

int SuperTrap::vaulthunter_dot_exe(std::string const &target)
{
	return(FragTrap::vaulthunter_dot_exe(target));
}
