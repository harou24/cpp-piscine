#include "AMateria.hpp"

AMateria::AMateria() : _type("AMateria"), _xp(0) {
}

AMateria::AMateria(std::string const & type) : _type(type), _xp(0) {
}

AMateria::AMateria(const AMateria& other){
	*this = other;
}

AMateria& AMateria::operator=(const AMateria& other) {
	if (this != &other) {
		this->_xp = other._xp;
		this->_type = other._type;
	}
	return *this;
}

AMateria::~AMateria() {
}


std::string const&	AMateria::getType() const {
	return this->_type;
}

unsigned int		AMateria::getXP() const {
	return this->_xp;
}

void					AMateria::use(ICharacter& target) {
	(void)target;
	this->_xp += 10;
}
