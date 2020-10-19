#include "Cure.hpp"
#include <string>
#include <iostream>

Cure::Cure() : AMateria() {
	this->_type = "cure";
	this->_xp = 0;
}

Cure::Cure(const Cure& other) : AMateria() {
	*this = other;
}

Cure& Cure::operator=(const Cure& other) {
	if (this != &other) {
		this->_xp = other._xp;
		this->_type = other._type;
	}
	return *this;
}

Cure::~Cure() {
}


Cure*			Cure::clone() const {
	return new Cure(*this);
}

void					Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
	this->_xp += 10;
}
