#ifndef ZOMBIE_EVENT_H
#define ZOMBIE_EVENT_H

# include "Zombie.hpp"

class ZombieEvent {

private : 
	std::string _zombieType;

public : 
	ZombieEvent(void);
	~ZombieEvent(void);

	Zombie *newZombie (std::string name);
	Zombie *randomChump(void);
	void setZombieType(std::string type);
};

#endif
