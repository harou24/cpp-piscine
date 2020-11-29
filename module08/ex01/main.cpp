#include "Span.hpp"
#include <iostream>
#include <list>
#include <time.h>
#include <stdlib.h>

int main(void)
{
	srand(time(0));
	std::vector<int> l;
	for (int i = 0; i < 10; i++)
		l.push_back(rand() % 100);
	Span s(10);
	s.addRange(l.begin(), l.end());
	std::cout << s << std::endl;

	Span s2(10);
	std::cout << s2 << std::endl;

	Span s3(3);
	s3.addNumber(50);
	s3.addNumber(42);
	s3.addNumber(2);
	std::cout << s3 << std::endl;
	try
	{
		s3.addNumber(100);
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl << std::endl;
	}

	Span s4(11000);
	std::vector<int> test;
	for (int i = 0; i < 11000; i++)
		test.push_back(rand() % 100);
	s4.addRange(test.begin(), test.end());
	std::cout << s4 << std::endl;
	return (0);
}
