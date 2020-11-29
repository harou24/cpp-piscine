/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mutantstack.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: haachtch <haachtch@student.codam.nl>          +#+                    */
/*                                                   +#+                      */
/*   Created: 2020/11/29 18:04:18 by haachtch      #+#    #+#                 */
/*   Updated: 2020/11/29 18:33:53 by haachtch      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_H_
# define MUTANTSTACK_H_

# include <stack>
# define container c 
template <typename T>
class MutantStack:
	public std::stack< T, std::deque<T> > {

	public:
		typedef typename std::deque<T>::iterator iterator;
		iterator	begin();
		iterator	end();

};

template <typename T>
typename MutantStack< T >::iterator		MutantStack< T >::begin()
{
	return this->container.begin();
}

template <typename T>
typename MutantStack<T>::iterator		MutantStack<T>::end()
{
	return this->container.end();
}

#endif
