#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void){}

MateriaSource::MateriaSource(const MateriaSource &m){
	*this = m;
}

MateriaSource::~MateriaSource(void){}

MateriaSource& MateriaSource::operator = (const MateriaSource &m)
{
	for (int i = 0; i < 4; i++)
		this->_mSrcs[i] = m->mSrcs[i];
	return(*this);
}

void MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
		if (this->_mSrcs[i] == NULL)
			this->_mSrcs = m;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	if (type == "Ice")
		return new Ice();
	else if (type == "Cure")
		return new Cure();
	return (NULL);
}
