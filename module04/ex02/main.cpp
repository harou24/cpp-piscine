#include "Squad.hpp"
#include "AssaultTerminator.hpp"
#include "TacticalMarine.hpp"
#include "ISpaceMarine.hpp"
#include "ISquad.hpp"
#include "TacticalMarine.hpp"

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;
	
	std::cout << "______________________________________" << std::endl;
	
	Squad *test = new Squad(100);
	int i = 0;
	ISpaceMarine*	marines[100];
	while (i < 100)
	{
		if (i % 2)
			marines[i] = new AssaultTerminator;
		else
			marines[i] = new TacticalMarine;
		test->push(marines[i]);
		marines[i]->battleCry();
		marines[i]->rangedAttack();
		marines[i]->meleeAttack();
		i++;
	}
	delete(test);
	system("leaks test");
	return 0;
}
