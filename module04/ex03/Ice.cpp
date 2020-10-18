#include "Ice.hpp"

Ice::Ice(void) : AMaterial("ice"){}

Ice::Ice(const Ice &ice) : AMaterial(ice){}

Ice::~Ice(){}

Ice& Ice::operator = (const Ice &ice)
{
	this->setXP(ice.getXP());
	return (*this);
}

AMaterial* Ice::clone() const
{
	return (new Ice(*this));
}

void use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << "*" << std::endl;
}
