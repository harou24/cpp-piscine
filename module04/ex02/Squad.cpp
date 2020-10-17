#include "Squad.hpp"

Squad::Squad(void)
{
	this->_unit = 0;
	this->_size = 0;
	this->_squad = new ISpaceMarine*[this->_size];
}

Squad::Squad(int size)
{
	this->_unit = 0;
	this->_size = size;
	this->_squad = new ISpaceMarine*[this->_size];
}

Squad::Squad(const Squad &s)
{
	/*this->_unit = s._unit;
	this->_size = s._size;
	this->_squad = new ISpaceMarine*[this->_size];
	int i = 0;
	while (i < this->_unit)
	{
		this->_squad[i] = s._squad[i]->clone();
		i++;
	}
	*/
	*this = s;
}

Squad::~Squad(void)
{
	int i = 0;
	while (i < this->_unit)
	{
		delete (this->_squad[i]);
		i++;
	}
	delete[] this->_squad;
}

Squad& Squad::operator = (const Squad &s)
{
	int i = 0;
	while (i < this->_unit)
	{
		delete (this->_squad[i]);
		i++;
	}
	delete[] this->_squad;

	this->_unit = s._unit;
	this->_size = s._size;
	this->_squad = new ISpaceMarine*[this->_size];
	i = 0;
	while (i < this->_unit)
	{
		this->_squad[i] = s._squad[i]->clone();
		i++;
	}
	return (*this);
}

int Squad::getCount() const
{
	return this->_unit;
}

ISpaceMarine* Squad::getUnit(int index) const
{
	if (this->_squad[index])
		return (this->_squad[index]);
	return (NULL);
}

int Squad::push(ISpaceMarine* spm)
{
	if (spm == NULL)
		return (this->_unit);
	int i = 0;
	while (i < this->_unit)
	{
		if (spm == this->_squad[i])
			return (this->_unit);
		i++;
	}
	this->_squad[this->_unit] = spm;
	this->_unit += 1;
	return (this->_unit);
}
