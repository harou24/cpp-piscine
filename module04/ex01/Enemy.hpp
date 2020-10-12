#ifndef ENNEMY_
# define ENNEMY_

#include <iostream>

class Enemy
{
	private:
			std::string _type;
			int _hitPts;
	
	public:
			Enemy(int hp, std::string const & type);
			Enemy(const Enemy &e);
			virtual ~Enemy();

			Enemy& operator = (const Enemy &ft);

			std::string const getType() const;
			int getHP() const;
			virtual void takeDamage(int);
};

#endif
