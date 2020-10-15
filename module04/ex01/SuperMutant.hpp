#ifndef SUPER_MUTANT_
# define SUPER_MUTANT_

# include <iostream>
# include "Enemy.hpp"

class SuperMutant : public Enemy
{
	public:
			SuperMutant(void);
			SuperMutant(const SuperMutant &e);
			~SuperMutant(void);

			SuperMutant& operator = (const SuperMutant &ft);

			void takeDamage(int);
};

#endif
