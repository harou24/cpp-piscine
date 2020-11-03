#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>
#include <deque>

int main(void)
{
	int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	std::vector<int> test(array, array + sizeof(array) / sizeof(int));
	try 
	{
		std::cout << easyFind(test, 0) << std::endl;
		std::cout << easyFind(test, 5) << std::endl;
		std::cout << easyFind(test, 2) << std::endl;
		std::cout << easyFind(test, 10) << std::endl;
		std::cout << easyFind(test, 11) << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	int array2[] = {-11, 99, 88, 77, 66, -88, 55, 33, -22};
	std::list<int> test2(array2, array2 + sizeof(array2) / sizeof(int));
	try 
	{
		std::cout << easyFind(test2, -22) << std::endl;
		std::cout << easyFind(test2, 55) << std::endl;
		std::cout << easyFind(test2, 33) << std::endl;
		std::cout << easyFind(test2, -22) << std::endl;
		std::cout << easyFind(test2, 11) << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	int array3[] = {111, 112, 113, 114, 115};
	std::deque<int> test3(array3, array3 + sizeof(array3) / sizeof(int));
	try 
	{
		std::cout << easyFind(test3, 111) << std::endl;
		std::cout << easyFind(test3, 112) << std::endl;
		std::cout << easyFind(test3, 115) << std::endl;
		std::cout << easyFind(test3, -22) << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
