#ifndef FRAG_TRAP_H
# define FRAG_TRAP_H

#include <iostream>

class FragTrap {
	private :
		unsigned int 		_hitPoints;
		unsigned int 		_maxHitPoints;
		unsigned int 		_energyPoints;
		unsigned int 		_maxEnergyPoints;
		unsigned int 		_level;
		std::string 		_name;
		unsigned int 		_meleeAttackDamage;
		unsigned int 		_rangedAttackDamage;
		unsigned int 		_armorReduction;
		static std::string	_randomAttack[10];
	
	public :
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(const FragTrap &ft);
		FragTrap& operator = (const FragTrap &ft);
		~FragTrap(void);

		void rangedAttack(std::string const &target);
		void meleeAttack(std::string const &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		int vaulthunter_dot_exe(std::string const &target);

		unsigned int getHitPoints(void) const;
		unsigned int getHitMaxPoints(void) const;
		unsigned int getEnergyPoints(void) const;
		unsigned int getMaxEnergyPoints(void) const;
		unsigned int getLevel(void) const;
		std::string getName(void) const;
		unsigned int getMeleeAttack(void) const;
		unsigned int getRangedAttack(void) const;
		unsigned int getArmorReduction(void) const;

		void setHitPoints(const unsigned int val);
		void setHitMaxPoints(const unsigned int val);
		void setEnergypoints(const unsigned int val);
		void setMaxEnergyPoints(const unsigned int val);
		void Level(const unsigned int val);
		void setName(const std::string name);;
		void setMeleeAttack(const unsigned int val);
		void setRangedAttack(const unsigned int val);
		void setArmmorReduction(const unsigned int val);
		void display(void) const;
		bool isDead(void) const;
};

#endif
