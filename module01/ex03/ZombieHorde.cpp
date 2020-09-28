#include "ZombieHorde.hpp"


ZombieHorde::ZombieHorde(int nb)
{

	this->_count = nb;
	this->_zombies = new Zombie[nb];
	for (int i = 0; i < nb; i++)
	{
//		_zombies[i] = new Zombie(ZombieHorde::_names[std::rand() % 10], ZombieHorde::_types[std::rand() % 10]);
		_zombies[i].setName(ZombieHorde::_names[std::rand() % 10]);
		_zombies[i].setType(ZombieHorde::_types[std::rand() % 10]);

	}
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

std::string ZombieHorde::_names[10] = {
                                                                "Alpha",
                                                                "Beta",
                                                                "Gamma",
                                                                "Delta",
                                                                "Epsilon",
                                                                "Zeta",
                                                                "Eta",
                                                                "Theta",
                                                                "Iota",
                                                                "Kappa"
};

std::string	ZombieHorde::_types[10] = {
                                                                "Magic",
                                                                "Warrior",
                                                                "Sleepy",
                                                                "Commando",
                                                                "Happy",
                                                                "Stone",
                                                                "Crazy",
                                                                "Special",
                                                                "Killer",
                                                                "Cool"
};
