#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"


int main()
{
	/*
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	*/
	
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* moi = new Character("moi");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	moi->equip(tmp);
	tmp = src->createMateria("cure");
	moi->equip(tmp);
	tmp = src->createMateria("ice");
	moi->equip(tmp);
	ICharacter* bob = new Character("bob");
	std::cout << "0 XP=" << tmp->getXP() << std::endl;
	moi->use(0, *bob);
	moi->use(1, *bob);
	std::cout << "3rd XP=" << tmp->getXP() << std::endl;
	moi->use(2, *bob);
	std::cout << "3rd XP=" << tmp->getXP() << std::endl;
	moi->use(3, *bob);
	moi->use(-1, *bob);
	std::cout << "Unequip 3rd" << std::endl;
	moi->unequip(2);
	moi->use(2, *bob);
	std::cout << "3rd XP=" << tmp->getXP() << std::endl;
	std::cout << "Requip 3rd" << std::endl;
	moi->equip(tmp);
	moi->use(2, *bob);
	std::cout << "3rd XP=" << tmp->getXP() << std::endl;
	delete bob;
	delete moi;
	delete src;
	return 0;
}
