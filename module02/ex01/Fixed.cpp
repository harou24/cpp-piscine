#include "Fixed.hpp"
#include <cmath>

const int Fixed::_fractionalBits=8;

Fixed::Fixed(void) : _fixedPointValue(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &f)
{
	std::cout << "Copy constructor called" << std::endl;
	*(this)= f;
}

Fixed::Fixed(const int value)
{
	this->_fixedPointValue = value << _fractionalBits;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value)
{
	this->_fixedPointValue = roundf(value * (1 << _fractionalBits));
	std::cout << "Float constuctor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator = (const Fixed &f)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_fixedPointValue = f._fixedPointValue;
	return (*this);
}

std::ostream &operator<<(std::ostream &output , const Fixed &f)
{
	output << f.toFloat();
	return (output);
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

float Fixed::toFloat(void) const
{
	return ((float)(this->_fixedPointValue)/ (1 << _fractionalBits));
}

int Fixed::toInt(void) const
{
	return ((int)(this->_fixedPointValue >> _fractionalBits));
}
