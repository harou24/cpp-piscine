#include "Brain.hpp"
#include <sstream>

Brain::Brain(){
	this->_speed = 0;
	this->_temperature = 37;
	this->_iq = 70;
}

Brain::~Brain(){}

std::string		Brain::identify() const
{
	std::stringstream address;
	address << this;
	return (address.str());
}
