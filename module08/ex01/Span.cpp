#include "Span.hpp"
#include <stdexcept>
#include <iterator>

Span::Span(void){}

Span::Span(unsigned int n)
{
	this->_nb_elem = n;
}

Span::Span(const Span &cpy){*this = cpy;}
Span::~Span(void){}

Span& Span::operator = (const Span&){return(*this);}

void Span::addNumber(int nb)
{
	if (this->_set.size() == this->_nb_elem)
		throw std::runtime_error("No place left in container !");
	if (!this->_set.insert(nb).second)
		throw std::runtime_error("NB already in the set !");
}

unsigned int Span::shortestSpan(void) const
{
	if (this->_set.size() < 2)
		throw std::runtime_error("Not enough values in the set !");
	std::set<int>::iterator second = this->_set.begin();
	second++;
	return (*second - *(this->_set.begin()));
}

unsigned int Span::longestSpan(void) const
{
	if (this->_set.size() < 2)
		throw std::runtime_error("Not enough values in the set !");
	std::set<int>::iterator last = this->_set.end();
	last--;
	return (*last)- *(this->_set.begin());
}

void Span::addRange(std::set<int>::iterator start, std::set<int>::iterator end)
{
	for (std::set<int>::iterator i = start; i != end; i++)
		this->addNumber(*i);
}

