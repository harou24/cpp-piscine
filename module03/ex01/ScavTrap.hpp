#ifndef SCAV_TRAP_H
# define SCAV_TRAP_H

#include <iostream>

class ScavTrap {
	private :
		 int 		_hitPoints;
		 int 		_maxHitPoints;
		 int 		_energyPoints;
		 int 		_maxEnergyPoints;
		 int 		_level;
		std::string 		_name;
		 int 		_meleeAttackDamage;
		 int 		_rangedAttackDamage;
		 int 		_armorReduction;
		static std::string	_randomChall[10];
	
	public :
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &ft);
		ScavTrap& operator = (const ScavTrap &ft);
		~ScavTrap(void);

		void rangedAttack(std::string const &target);
		void meleeAttack(std::string const &target);
		void takeDamage (unsigned int amount);
		void beRepaired(unsigned int amount);
		void challengeNewcomer(void);

		 int getHitPoints(void) const;
		 int getHitMaxPoints(void) const;
		 int getEnergyPoints(void) const;
		 int getMaxEnergyPoints(void) const;
		 int getLevel(void) const;
		std::string getName(void) const;
		 int getMeleeAttack(void) const;
		 int getRangedAttack(void) const;
		 int getArmorReduction(void) const;

		void setHitPoints(const  int val);
		void setHitMaxPoints(const  int val);
		void setEnergypoints(const  int val);
		void setMaxEnergyPoints(const  int val);
		void Level(const  int val);
		void setName(const std::string name);;
		void setMeleeAttack(const  int val);
		void setRangedAttack(const  int val);
		void setArmmorReduction(const  int val);
		void display(void) const;
		bool isDead(void) const;
};

#endif
