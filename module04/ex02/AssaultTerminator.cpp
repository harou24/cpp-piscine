#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void){
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &ast){
	std::cout << "* teleports from space *" << std::endl;
	*this = ast;
}

AssaultTerminator::~AssaultTerminator(void){
	std::cout << "I’ll be back..." << std::endl;
}


AssaultTerminator& AssaultTerminator::operator = (const AssaultTerminator &ast){
	(void)ast;
	return (*this);
}

ISpaceMarine* AssaultTerminator::clone(void) const 
{
	AssaultTerminator *ast = new AssaultTerminator(*this);
	return (ast);
}

void AssaultTerminator::battleCry(void) const
{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void AssaultTerminator::rangedAttack(void) const
{
	std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack(void) const
{
	std::cout << "* attacks with chainfists *" << std::endl;
}
