#ifndef PEON_H
# define PEON_H

# include <iostream>
# include "Victim.hpp"

class Peon : public Victim{


	public :
		Peon(void);
		Peon(std::string name);
		Peon(const Peon &s);
		~Peon(void);

		Peon& operator = (const Peon &s);
		void getPolymorphed(void) const;
};

#endif
