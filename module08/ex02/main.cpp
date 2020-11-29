#include "mutantstack.hpp"
#include <iostream>

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << "---------------------------------\n";

	MutantStack <char> test;
	test.push('H');
	test.push('e');
	test.push('l');
	test.push('l');
	test.push('o');
	test.push(' ');
	test.push('4');
	test.push('2');
	for(MutantStack<char>::iterator itr = test.begin(); itr != test.end(); itr++)
		std::cout << *itr;
	std::cout << std::endl;
	return 0;
}
