#include "Span.hpp"
#include <iostream>
#include <list>
#include <time.h>
#include <stdlib.h>

int main(void)
{
	srand(time(0));
	std::multiset<int> l;
	for (int i = 0; i < 10; i++)
		l.insert(rand() % 10);
	Span s(10);
	s.addRange(l.begin(), l.end());
	std::multiset<int>::iterator itr;
	for (itr = s.getSet().begin(); itr != s.getSet().end(); itr++)
		std::cout << *itr << std::endl;
	//std::cout << s.shortestSpan() << std::endl;
	//std::cout << s.longestSpan() << std::endl;
	return (0);
}
