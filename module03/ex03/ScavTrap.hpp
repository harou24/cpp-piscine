#ifndef SCAV_TRAP_H
# define SCAV_TRAP_H

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
	private :
			static std::string	_randomChall[10];
	
	public :
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &ft);
		ScavTrap& operator = (const ScavTrap &ft);
		~ScavTrap();

		void challengeNewcomer(void);

};

#endif
