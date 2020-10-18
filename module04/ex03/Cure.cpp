#include "Cure.hpp"

Cure::Cure(void) : AMaterial("ice"){}

Cure::Cure(const Cure &ice) : AMaterial(ice){}

Cure::~Cure(){}

Cure& Cure::operator = (const Cure &ice)
{
	this->setXP(ice.getXP());
	return (*this);
}

AMaterial* Cure::clone() const
{
	return (new Cure(*this));
}

void use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
