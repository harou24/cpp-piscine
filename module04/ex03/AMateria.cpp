#include "AMateria.hpp"

AMateria::AMateria(void){}

AMateria::AMateria(std::string const &type)
{
	this->_xp = 0;
	this->_type = type;
}

AMateria::AMateria(const AMateria &am)
{
	*this = am;
}

AMateria::~AMateria(void){}

AMateria& AMateria::operator = (const AMateria &am)
{
	this->_xp = am._xp;
	this->_type = am._type;
	return (*this);
}

std::string const & AMateria::getType(void) const
{
	return (this->_type);
}

unsigned int AMateria::getXP(void) const
{
	return (this->_xp);
}
