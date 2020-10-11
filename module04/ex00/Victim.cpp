#include "Victim.hpp"

Victim::Victim()
{
	this->_name = "default-name";
	std::cout << "Some random victim called "<< this->_name << " just appeared!" << std::endl;

}

Victim::Victim(std::string name)
{
	this->_name = name;
	std::cout << "Some random victim called "<< this->_name << " just appeared!" << std::endl;
}

Victim::Victim(const Victim &v)
{
	this->_name = v._name;
	std::cout << "Some random victim called "<< this->_name << " just appeared!" << std::endl;
}

Victim::~Victim()
{
	std::cout << "Victim " << this->_name << " just died for no apparent reason!" << std::endl;
}

void Victim::introduce(void) const
{
	std::cout << "I'm " << this->_name << " and I like otters!" << std::endl;
}

Victim& Victim::operator = (const Victim &v)
{
        std::cout << "Assignation operator called" << std::endl;
        this->_name = v._name;
        return (*this);
}

void Victim::getPolymorphed() const
{
	std::cout << this->_name << " has been turned into a cute little sheep!" << std::endl;
}

std::string Victim::getName() const
{
	return (this->_name);
}

void Victim::setName(const std::string name)
{
	this->_name = name;
}

std::ostream &operator << (std::ostream &output , const Victim &v)
{
	std::string str = "I'm " + v.getName() + " and I like otters!\n";
    output << str;
    return (output);
}


