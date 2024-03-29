#include "AWeapon.hpp"
#include "Character.hpp"
#include "Enemy.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Character.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"

int main()
{
	Character* me = new Character("me");
	std::cout << *me;
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	
	std::cout << "_______________________________________________" << std::endl;

	Enemy *mutant = new SuperMutant();
	me->attack(mutant);
	std::cout << *me;
	me->attack(mutant);
	std::cout << *me;
	me->attack(mutant);
	std::cout << *me;
	me->attack(mutant);
	std::cout << *me;
	me->attack(mutant);
	std::cout << *me;
	me->attack(mutant);
	std::cout << *me;

	me->recoverAP();
	std::cout << *me;
	me->recoverAP();
	std::cout << *me;
	me->equip(pf);
	std::cout << *me;
	me->attack(mutant);
	std::cout << *me;
	int i = 0;
	while(i < 10)
	{
		me->recoverAP();
		i++;
	}
	std::cout << *me;
	return (0);
}
