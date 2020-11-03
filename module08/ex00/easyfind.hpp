#ifndef EASYFIND_H_
# define EASYFIND_H_

# include <algorithm>
# include <stdexcept>

template<typename T>
int	easyFind(T &container, const int& i)
{
	typename T::iterator iter = std::find(container.begin(), container.end(), i);
	if (iter == container.end())
		throw std::runtime_error("Not found.");
	return (*iter);
}

#endif 
