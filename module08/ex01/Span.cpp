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
	this->_set.push_back(nb);
}

unsigned int Span::shortestSpan(void) const
{
	if (this->_set.size() < 2)
		throw std::runtime_error("Not enough values in the set !");
	unsigned int shortest = INT_MAX;
	std::vector<int> copy = this->_set;
	std::sort(copy.begin(), copy.end());
	for(size_t i = 1; i < this->_set.size(); i++)
	{
		unsigned int sum = copy.at(i) - copy.at(i - 1);
		if (sum < shortest)
			shortest = sum;
	}
	return shortest;
}

unsigned int Span::longestSpan(void) const
{
	if (this->_set.size() < 2)
		throw std::runtime_error("Not enough values in the set !");
	unsigned int longest = *std::max_element(this->_set.begin(), this->_set.end()) -
							*std::min_element(this->_set.begin(), this->_set.end());
	return longest;
}

void Span::addRange(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
	for (std::vector<int>::iterator i = start; i != end; i++)
		this->addNumber(*i);
}

std::vector<int> & Span::getSet(void)
{
	return this->_set;
}


std::ostream& operator << (std::ostream &output,Span &sp)
{
	std::vector<int>::iterator itr;
	output << "-------SPAN-------\n";
	output << "size-> " << sp.getSet().size() << std::endl;
	if (sp.getSet().size() < 100)
	{
		for(itr = sp.getSet().begin(); itr != sp.getSet().end(); itr++)
			output << *itr << std::endl;
	}
	try
	{
	output << "Longest-> " << sp.longestSpan() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
	output << "Shortest-> " << sp.shortestSpan();
	}
	catch(std::exception &e)
	{
		std::cerr << e.what();
	}
	output << "\n-------------------\n";
	return output;
}
