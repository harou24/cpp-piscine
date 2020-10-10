#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	FragTrap ft("Frag");
	ScavTrap sc("Scav");
	
	ft.display();
	sc.display();
	std::srand(time(0));

	while (!(ft.isDead() && sc.isDead()))
	{

		ft.meleeAttack("Scav-two");
		sc.takeDamage(ft.getMeleeAttack() - sc.getArmorReduction());
		sc.display();
		sc.meleeAttack("Frag");
		ft.takeDamage(sc.getMeleeAttack() - ft.getArmorReduction());
		ft.display();

		if (ft.isDead() || sc.isDead())
			break ;

		ft.rangedAttack("Scav");
		sc.takeDamage(ft.getRangedAttack() - sc.getArmorReduction());
		sc.display();
		sc.rangedAttack("Frag");
		ft.takeDamage(sc.getRangedAttack() - ft.getArmorReduction());
		ft.display();

		if (ft.isDead() || sc.isDead())
			break ;

		int index = ft.vaulthunter_dot_exe("Scav");
		sc.takeDamage((index * (std::rand() % 10) + 10) - sc.getArmorReduction());
		sc.display();

		sc.challengeNewcomer();
		ft.display();

		if (ft.isDead() || sc.isDead())
			break ;
		ft.beRepaired(10);
		sc.beRepaired(100);

	}
	if (ft.isDead())
		std::cout << sc.getName() << " won the game !" << std::endl;
	else if (sc.isDead())
		std::cout << ft.getName() << " won the game !" << std::endl;
	else
		std::cout << "Equality" << std::endl;
	
	return (0);
}
