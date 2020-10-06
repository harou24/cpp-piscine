#ifndef FRAG_TRAP_H
# define FRAG_TRAP_H

class FragTrap {
	private :
		unsigned int 		_hitPoints;
		unsigned int 		_maxHitPoints;
		unsigned int 		_energyPoints;
		unsigned int 		_maxEnergyPoints;
		unsigned int 		_level;
		std::string 		_name;
		unsigned int 		_meleeAttackDomage;
		unsigned int 		_rangedAttackDomage;
		unsigned int 		_armorReduction;
	
	public :
		FragTrap(std::string name);
		FragTrap(const FragTrap ft);
		FragTrap& operator = (const FragTrap &ft);
		~FragTrap();

		void rangedAttack(std::string const &target);
		void meleeAttack(std::string const &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void vaulthunter_dot_exe(std::string const &target);

		unsigned int getHitPoints() const;
		unsigned int getHitMaxPoints() const;
		unsigned int getEnergyPoints() const;
		unsigned int getMaxEnergyPoints() const;
		unsigned int getLevel() const;
		std::string getName() const;
		unsigned int getMeleeAtack() const;
		unsigned int getRangedAttack() const;
		unsigned int getArmorReduction() const;

		void setHitPoints(const unsigned int val);
		void setHitMaxPoints(const unsigned int val);
		void setEnergypoints(const unsigned int val);
		void setMaxEnergyPoints(const unsigned int val);
		void Level(const unsigned int val);
		void setName(const std::string name);;
		void setMeleeAttack(const unsigned int val);
		void setRangedAttack(const unsigned int val);
		void setArmmorReduction(const unsigned int val);
};

#endif
