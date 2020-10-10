#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"
#include "SuperTrap.hpp"

int main(void)
{
	SuperTrap *super = new SuperTrap("Hello");
	FragTrap fg("Hello");
	super->display();
	std::srand(time(0));
	super->vaulthunter_dot_exe("Hello_world");
	super->ninjaShoebox(*super);
	super->display();
	super->meleeAttack("yo");
	super->rangedAttack("bye");
	super->takeDamage(10000);
	super->display();
	super->beRepaired(1000000);
	super->display();
	return (0);
}
