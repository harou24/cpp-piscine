#ifndef ENNEMY_
# define ENNEMY_

#include <iostream>

class Enemy
{
	private:
			std::string _type;
			int _hitPts;
	
	public:
			Enemy(void);
			Enemy(int hp, std::string const & type);
			Enemy(const Enemy &e);
			virtual ~Enemy(void);

			Enemy& operator = (const Enemy &ft);

			std::string const getType(void) const;
			int getHP(void) const;
			void setType(std::string const type);
			void setHP(const int val);
			virtual void takeDamage(int);
};

#endif
