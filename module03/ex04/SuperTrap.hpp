#ifndef SUPER_TRAP_H
# define SUPER_TRAP_H

# include <iostream>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : public virtual NinjaTrap, public virtual FragTrap{
	
	public :
		SuperTrap(void);
		SuperTrap(std::string name);
		SuperTrap(const SuperTrap &st);
		SuperTrap& operator = (const SuperTrap &st);
		~SuperTrap(void);

		int vaulthunter_dot_exe(std::string const &target);
		void ninjaShoebox(SuperTrap &st);
		void rangedAttack(std::string const &target);
        void meleeAttack(std::string const &target);
};

#endif
