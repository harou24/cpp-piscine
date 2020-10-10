#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"

int main(void)
{
	NinjaTrap	ninja("Ninja");
	ClapTrap	crap(ninja);
	FragTrap	frag("Frag");
	ScavTrap	clap("Scav");

	ninja.ninjaShoebox(ninja);
    ninja.ninjaShoebox(crap);
    ninja.ninjaShoebox(frag);
    ninja.ninjaShoebox(clap);

	ninja.meleeAttack("Frag");
	frag.takeDamage(50);
	frag.display();
	ninja.rangedAttack("Ninja");
	ninja.takeDamage(30);
	ninja.display();

	ninja.beRepaired(100);
	ninja.display();
	ninja.takeDamage(1000);
	ninja.display();
	return (0);
}
