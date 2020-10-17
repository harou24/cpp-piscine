#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void){
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::TacticalMarine(const TacticalMarine &ast){
	std::cout << "Tactical Marine ready for battle!" << std::endl;
	*this = ast;
}

TacticalMarine::~TacticalMarine(void){
	std::cout << "Aaargh..." << std::endl;
}


TacticalMarine& TacticalMarine::operator = (const TacticalMarine &ast){
	(void)ast;
	return (*this);
}

ISpaceMarine* TacticalMarine::clone(void) const 
{
	TacticalMarine *ast = new TacticalMarine(*this);
	return (ast);
}

void TacticalMarine::battleCry(void) const
{
	std::cout << "For the holy PLOT!" << std::endl;
}

void TacticalMarine::rangedAttack(void) const
{
	std::cout << "* attacks with a bolter *" << std::endl;
}

void TacticalMarine::meleeAttack(void) const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
}
