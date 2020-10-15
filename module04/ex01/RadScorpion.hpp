#ifndef RAD_SCORPION_
# define RAD_SCORPION_

# include <iostream>
# include "Enemy.hpp"

class RadScorpion : public Enemy
{
	public:
			RadScorpion(void);
			RadScorpion(const RadScorpion &e);
			~RadScorpion(void);

			RadScorpion& operator = (const RadScorpion &ft);

			void takeDamage(int);
};

#endif
