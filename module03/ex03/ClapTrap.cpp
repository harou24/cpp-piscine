#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name, unsigned int hitPts, unsigned int maxHitPts, unsigned int energy,
                                                unsigned int maxEnergy, unsigned int level, unsigned int melee, unsigned int ranged,
                                                unsigned int armorReduction)
{
	std::cout << "Ha-HA!" << std::endl;
	this->_name = name;
	this->_hitPoints = hitPts;
	this->_maxHitPoints = maxHitPts;
	this->_energyPoints = energy;
	this->_maxEnergyPoints = maxEnergy;
	this->_level = level;
	this->_meleeAttackDamage = melee;
	this->_rangedAttackDamage = ranged;
	this->_armorReduction = armorReduction;
	std::cout << "Object has been constructed !\n" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &ct)
{
	std::cout << "Alaka-ZAM!" << std::endl;
	this->_name = ct._name;
	this->_hitPoints = ct._hitPoints;
	this->_maxHitPoints = ct._maxHitPoints;
	this->_energyPoints = ct._energyPoints;
	this->_maxEnergyPoints = ct._maxEnergyPoints;
	this->_level = ct._level;
	this->_meleeAttackDamage = ct._meleeAttackDamage;
	this->_rangedAttackDamage = ct._rangedAttackDamage;
	this->_armorReduction = ct._armorReduction;
	std::cout << "Object has been constructed !\n" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Ugh, friggin' hate that guy." << std::endl;
	std::cout << "Object has been destructed !\n" << std::endl;
}

void ClapTrap::meleeAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at melee, causing " << this->_meleeAttackDamage << " points of damage! \n" << std::endl;
	
}

void ClapTrap::rangedAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at range, causing " << this->_rangedAttackDamage << " points of damage! \n" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints <= amount)
		this->_hitPoints = 0;
	else
		this->_hitPoints -= amount;
	std::cout << this->_name << " has been damaged by " << amount << "\n" <<std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints + amount <= this->_maxHitPoints)
		this->_hitPoints += amount;
	else
		this->_hitPoints = this->_maxHitPoints;
std::cout << this->_name << " has been repaired by " << amount << "\n" <<std::endl;
}

unsigned int ClapTrap::getArmorReduction() const
{
	return (this->_armorReduction);
}

void ClapTrap::display() const
{
	std::cout << this->_name << " : " << std::endl;
	std::cout << "HP->" << this->_hitPoints << std::endl;
	std::cout << "Energy->" << this->_energyPoints << "\n" <<std::endl;
}

bool ClapTrap::isDead() const
{
	if (this->_hitPoints == 0)
		return true;
	else
		return false;
}

unsigned int ClapTrap::getMeleeAttack() const
{
	return (this->_meleeAttackDamage);
}

unsigned int ClapTrap::getRangedAttack() const
{
	return (this->_rangedAttackDamage);
}

std::string ClapTrap::getName() const
{
	return (this->_name);
}

void ClapTrap::setName(const std::string name)
{
	this->_name = name;
}

unsigned int ClapTrap::getEnergyPoints() const
{
	return (this->_energyPoints);
}

void ClapTrap::setEnergyPoints(const unsigned int val)
{
	this->_energyPoints = val;
}
