#include "MateriaSource.hpp"
#include <iostream>
#include <string>
#include <strings.h>

MateriaSource::MateriaSource() {
	_count = 0;
	bzero(this->_materias, 5 * sizeof(AMateria*));
}

MateriaSource::MateriaSource(const MateriaSource& other) {
	this->_count = other._count;
	bzero(_materias, 4 * sizeof(AMateria*));
	for (int i = 0; i < other._count; i++)
		this->_materias[i] = other._materias[i]->clone();
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other) {
	if (this != &other) {
		for (int i = 0; i < this->_count; i++)
			delete this->_materias[i];
		this->_count = other._count;
		bzero(_materias, 4 * sizeof(AMateria*));
		for (int i = 0; i < other._count; i++)
			this->_materias[i] = other._materias[i]->clone();
	}
	return *this;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < this->_count; i++) {
		delete this->_materias[i];
	}
}

void	MateriaSource::learnMateria(AMateria* m) {
	if (m == NULL || this->_count >= 4)
		return ;
	this->_materias[this->_count] = m;
	this->_count += 1;
}

AMateria*	MateriaSource::createMateria(std::string const &type) {
	for (int i = 0; i < this->_count; i++) {
		if (this->_materias[i]->getType() == type)
			return this->_materias[i]->clone();
	}
	return NULL;
}
