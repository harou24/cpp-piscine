#ifndef FRAG_TRAP_H
# define FRAG_TRAP_H

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap{
	private :
			static std::string	_randomAttack[10];
	
	public :
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(const FragTrap &ft);
		FragTrap& operator = (const FragTrap &ft);
		~FragTrap(void);

		int vaulthunter_dot_exe(std::string const &target);

};

#endif
