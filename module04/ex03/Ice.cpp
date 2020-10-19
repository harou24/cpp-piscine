#include "Ice.hpp"
#include <string>
#include <iostream>

Ice::Ice() : AMateria() {
	this->_type = "ice";
	this->_xp = 0;
}

Ice::Ice(const Ice& other) : AMateria() {
	*this = other;
}

Ice& Ice::operator=(const Ice& other) {
	if (this != &other) {
		this->_xp = other._xp;
		this->_type = other._type;
	}
	return *this;
}

Ice::~Ice() {
}


Ice*			Ice::clone() const {
	return new Ice(*this);
}

void					Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	this->_xp += 10;
}
