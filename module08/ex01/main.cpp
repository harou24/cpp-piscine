#include "Span.hpp"
#include <iostream>
#include <list>
#include <time.h>
#include <stdlib.h>

int main(void)
{
	srand(time(0));
	std::set<int> l;
	for (int i = 0; i <= 10000; i++)
		l.insert(rand() % 100000);
	Span s(10500);
	s.addRange(l.begin(), l.end());
	std::cout << s.shortestSpan() << std::endl;
	std::cout << s.longestSpan() << std::endl;
	return (0);
}
