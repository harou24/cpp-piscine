#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void){}
ZombieEvent::~ZombieEvent(void){}

Zombie	*ZombieEvent::newZombie(std::string name)
{
	return (new Zombie(name, "Lambda Zombie"));
}

Zombie	*ZombieEvent::randomChump()
{
	std::string names[10] = {
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

	std::srand(std::time(NULL));
	return (this->newZombie(names[std::rand() % 10]));
}

void	ZombieEvent::setZombieType(std::string type)
{
	this->_zombieType = type;
}
