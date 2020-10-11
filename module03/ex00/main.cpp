#include "FragTrap.hpp"

int main(void)
{
	FragTrap ft("Frag-one");
	FragTrap ft2("Frag-two");
	
	ft.display();
	ft2.display();
	std::srand(time(0));
	while (!(ft.isDead() && ft2.isDead()))
	{
		ft.meleeAttack("Frag-two");
		ft2.takeDamage(ft.getMeleeAttack() - ft2.getArmorReduction());
		ft2.display();
		ft2.meleeAttack("Frag-one");
		ft.takeDamage(ft2.getMeleeAttack() - ft.getArmorReduction());
		ft.display();

		if (ft.isDead() || ft2.isDead())
			break ;

		ft.rangedAttack("Frag-two");
		ft2.takeDamage(ft.getRangedAttack() - ft2.getArmorReduction());
		ft2.display();
		ft2.rangedAttack("Frag-one");
		ft.takeDamage(ft2.getRangedAttack() - ft.getArmorReduction());
		ft.display();

		if (ft.isDead() || ft2.isDead())
			break ;

		int index = ft.vaulthunter_dot_exe("Frag-two");
		ft2.takeDamage((index * (std::rand() % 10) + 10) - ft2.getArmorReduction());
		ft2.display();

		int index2 = ft2.vaulthunter_dot_exe("Frag-one");
		ft.takeDamage((index2 * (std::rand() % 10) + 10) - ft.getArmorReduction());
		ft.display();

		if (ft.isDead() || ft2.isDead())
			break ;
		ft.beRepaired(30);
		ft2.beRepaired(30);

	}
	if (ft.isDead())
		std::cout << ft2.getName() << " won the game !" << std::endl;
	else if (ft2.isDead())
		std::cout << ft.getName() << " won the game !" << std::endl;
	else
		std::cout << "Equality" << std::endl;
	ft.takeDamage(10000);
	ft.display();
	ft.beRepaired(20000);
	ft.display();

	return (0);
}
