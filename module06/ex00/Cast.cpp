#include "Cast.hpp"

Conversion::Conversion( void ) {}
Conversion::Conversion( std::string input ): _input(input) {}
Conversion::Conversion( Conversion &src ): _input(src._input) { *this = src; }
Conversion::~Conversion( void ) {}

Conversion	&Conversion::operator=( Conversion const &cpy)
{
	this->_input = cpy._input;
	return *this;
}

Conversion::operator	char( void ) const
{
	int	res = 0;

	try
	{
		res = std::stoi(this->_input);
		return (static_cast<char>(res));
	}
	catch (const std::exception &e)
	{
		throw (ConversionErrorException());
	}
}

Conversion::operator	int( void ) const
{
	int	res = 0;

	try
	{
		res = std::stoi(this->_input);
		return (res);
	}
	catch (const std::exception &e)
	{
		throw (ConversionErrorException());
	}
}

Conversion::operator	float( void ) const
{
	float res = 0.0;

	try
	{
		res = std::stof(this->_input);
		return (res);
	}
	catch (const std::exception &e)
	{
		throw (ConversionErrorException());
	}
}

Conversion::operator	double( void ) const
{
	double	res = 0.0;

	try
	{
		res = std::stod(this->_input);
		return (res);
	}
	catch (const std::exception &e)
	{
		throw (ConversionErrorException());
	}
}

Conversion::ConversionErrorException::ConversionErrorException( void ) {}
Conversion::ConversionErrorException::ConversionErrorException( ConversionErrorException const &cpy ) { *this = cpy;}
Conversion::ConversionErrorException::~ConversionErrorException( void ) throw() {}
Conversion::ConversionErrorException &Conversion::ConversionErrorException::operator=( ConversionErrorException const &old ) { (void)old; return *this; }

const char* Conversion::ConversionErrorException::what() const throw() {
	return "impossible";
}
