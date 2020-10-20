#ifndef FRAG_TRAP_H
# define FRAG_TRAP_H

#include <iostream>

class FragTrap {
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
		void setLevel(const  int val);
		void setName(const std::string name);;
		void setMeleeAttack(const  int val);
		void setRangedAttack(const  int val);
		void setArmmorReduction(const  int val);
		void display(void) const;
		bool isDead(void) const;
};

#endif
