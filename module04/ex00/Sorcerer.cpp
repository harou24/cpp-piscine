#include "Sorcerer.hpp"

Sorcerer::Sorcerer()
{
	this->_name = "default-name";
	this->_title = "default-title";
	std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(std::string name, std::string title)
{
	this->_name = name;
	this->_title = title;
	std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &s)
{
	this->_name = s._name;
	this->_title = s._title;
	std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same!" << std::endl;
}

void Sorcerer::introduce(void) const
{
	std::cout << "I am " << this->_name << ", " << this->_title << ", and I like ponies!" << std::endl;
}

Sorcerer& Sorcerer::operator = (const Sorcerer &s)
{
        std::cout << "Assignation operator called" << std::endl;
        this->_name = s._name;
		this->_title = s._title;
        return (*this);
}

void Sorcerer::polymorph(Victim const &v) const
{
	v.getPolymorphed();
}

std::string Sorcerer::getName() const
{
	return (this->_name);
}

std::string Sorcerer::getTitle() const
{
	return (this->_title);
}

std::ostream &operator<<(std::ostream &output , const Sorcerer &s)
{
	std::string str = "I am " + s.getName() + ", " + s.getTitle() + ", and I like ponies!\n";
    output << str;
    return (output);
}


