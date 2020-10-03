#include "Fixed.hpp"
#include <iostream>

const int Fixed::_fractionalBits=8;

Fixed::Fixed(void) : _fixedPointValue(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &f)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_fixedPointValue = f.getRawBits();
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator = (const Fixed &f)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_fixedPointValue = f.getRawBits();
	return (*this);
}

int		Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedPointValue);
}

void	Fixed::setRawBits(const int fpv)
{
	this->_fixedPointValue = fpv;
}
