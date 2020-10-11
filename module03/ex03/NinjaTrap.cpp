#include "NinjaTrap.hpp"
#include <ctime>

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name, 60, 60, 120, 120, 1, 60, 5, 0)
{
		
	std::cout << "Hot potato!" << std::endl;
	std::cout << "Object has been constructed !\n" << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap &nt) : ClapTrap(nt)
{
	std::cout << "Pull pin, throw!" << std::endl;
	std::cout << "Object has been constructed !\n" << std::endl;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "Throwing grenade!" << std::endl;
	std::cout << "Object has been destructed !\n" << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap &nt)
{
	 if (this->getEnergyPoints() < 15)
        {
                std::cout << "Out of energy\n" << std::endl;
                return ;
        }
	std::cout << "I AM ON FIRE!!! OH GOD, PUT ME OUT!!!" << std::endl;
	std::cout << this->getName() << " has used 15 energy to run special attack !\n" << std::endl;
	this->setEnergyPoints(this->getEnergyPoints() - 15);
	nt.beRepaired(10);
}

void NinjaTrap::ninjaShoebox(FragTrap &ft)
{
	 if (this->getEnergyPoints() < 10)
        {
                std::cout << "Out of energy\n" << std::endl;
                return ;
        }
	std::cout << "F to the R to the 4 to the G to the WHAAT!" << std::endl;
	std::cout << this->getName() << " has used 10 energy to run special attack !\n" << std::endl;
	this->setEnergyPoints(this->getEnergyPoints() - 10);
	ft.takeDamage(30 - ft.getArmorReduction());
}

void NinjaTrap::ninjaShoebox(ScavTrap &st)
{
	 if (this->getEnergyPoints() < 1)
        {
                std::cout << "Out of energy\n" << std::endl;
                return ;
        }
	std::cout << "This was a reeeally bad idea!" << std::endl;
	std::cout << this->getName() << " has used 1 energy to run special attack !\n" << std::endl;
	this->setEnergyPoints(this->getEnergyPoints() - 1);
	st.takeDamage(10 - st.getArmorReduction());
}

void NinjaTrap::ninjaShoebox(ClapTrap &ct)
{
	 if (this->getEnergyPoints() < 35)
        {
                std::cout << "Out of energy\n" << std::endl;
                return ;
        }
	std::cout << "Oh god I can't stop!" << std::endl;
	std::cout << this->getName() << " has used 35 energy to run special attack !\n" << std::endl;
	this->setEnergyPoints(this->getEnergyPoints() - 35);
	ct.takeDamage(70 - ct.getArmorReduction());
}


NinjaTrap& NinjaTrap::operator = (const NinjaTrap &ft)
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
