#ifndef CLAP_TRAP_H
# define CLAP_TRAP_H

# include <iostream>

class ClapTrap {
        private :
                unsigned int            _hitPoints;
                unsigned int            _maxHitPoints;
                unsigned int            _energyPoints;
                unsigned int            _maxEnergyPoints;
                unsigned int            _level;
                std::string             _name;
                unsigned int            _meleeAttackDamage;
                unsigned int            _rangedAttackDamage;
                unsigned int            _armorReduction;

        public :
				ClapTrap(void);
                ClapTrap(std::string name, unsigned int hitPts, unsigned int maxHitPts, unsigned int energy,
						unsigned int maxEnergy, unsigned int level, unsigned int melee, unsigned int ranged,
						unsigned int armorRedcution);

                ClapTrap(const ClapTrap &ct);
                ClapTrap& operator = (const ClapTrap &ct);
                ~ClapTrap(void);

                void rangedAttack(std::string const &target);
                void meleeAttack(std::string const &target);
                void takeDamage(unsigned int amount);
                void beRepaired(unsigned int amount);

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
                void setEnergyPoints(const unsigned int val);
                void setMaxEnergyPoints(const unsigned int val);
                void setLevel(const unsigned int val);
                void setName(const std::string name);;
                void setMeleeAttack(const unsigned int val);
                void setRangedAttack(const unsigned int val);
                void setArmorReduction(const unsigned int val);
                void display(void) const;
                bool isDead(void) const;
};


#endif
