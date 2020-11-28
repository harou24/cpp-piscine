#include "Span.hpp"
#include <stdexcept>
#include <iterator>
#include <iostream>

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
	this->_set.insert(nb);
}

unsigned int Span::shortestSpan(void) const
{
	if (this->_set.size() < 2)
		throw std::runtime_error("Not enough values in the set !");
	std::multiset<int>::iterator second = this->_set.begin();
	second++;
	return (*second - *(this->_set.begin()));
}

unsigned int Span::longestSpan(void) const
{
	if (this->_set.size() < 2)
		throw std::runtime_error("Not enough values in the set !");
	std::multiset<int>::iterator last = this->_set.end();
	last--;
	return (*last)- *(this->_set.begin());
}

void Span::addRange(std::multiset<int>::iterator start, std::multiset<int>::iterator end)
{
	for (std::multiset<int>::iterator i = start; i != end; i++)
		this->addNumber(*i);
}

std::multiset<int> & Span::getSet(void)
{
	return this->_set;
}
