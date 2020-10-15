#ifndef NINJA_TRAP_H
# define NINJA_TRAP_H

# include <iostream>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap{
	
	public :
		NinjaTrap(void);
		NinjaTrap(std::string name);
		NinjaTrap(const NinjaTrap &nt);
		~NinjaTrap(void);
		
		NinjaTrap& operator = (const NinjaTrap &nt);

		void ninjaShoebox(NinjaTrap &nt);
		void ninjaShoebox(FragTrap &ft);
		void ninjaShoebox(ScavTrap &st);
		void ninjaShoebox(ClapTrap &ct);
};

#endif
