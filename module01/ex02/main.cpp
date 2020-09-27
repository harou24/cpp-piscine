#include "ZombieEvent.hpp"

int		main(void)
{
	ZombieEvent ze;
	Zombie *z1 = ze.newZombie("Hello_world");
	Zombie *z2 = ze.randomChump();
	Zombie *z3 = new Zombie("SuperZombie", "Special");
	Zombie z4("Brave-z", "Stack");

	z1->announce();
	z2->announce();
	z3->announce();
	z4.announce();

	delete(z1);
	delete(z2);
	delete(z3);
	return (0);
}
