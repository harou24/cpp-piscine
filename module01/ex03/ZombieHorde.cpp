#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int nb)
{
	this->_count = nb;
	for (int i = 0; i < nb; i++)
		_zombies[i] = new Zombie(_names[std::rand() % 10], _types[std::rand() % 10]);
}

ZombieHorde::~ZombieHorde()
{
	delete [] this->_zombies;
}

void	ZombieHorde::announce()
{
	for(int i = 0; i < this->_count; i++)
		_zombies[i].announce();
}
