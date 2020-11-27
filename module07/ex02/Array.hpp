#ifndef ARRAY_HPP_
# define ARRAY_HPP_

# include <iostream>
# include <stdexcept>

template<typename T>
class Array {
	private :
		T	*_array;
		unsigned int _size;

	public :
		Array<T>(void) : _array(0), _size(0) { }
		
		Array<T>(unsigned int n) : _array(0), _size(n)
		{	
			this->_array = new T[n];
			for (unsigned int i = 0;i < this->_size; i++)
				this->_array[i] = T();
		}

		Array<T>(Array<T> const &cpy)	{ *this = cpy; }
		
		~Array<T>(void)
		{
			delete [] _array;
		}

		Array<T>& operator = (Array<T> const &old)
		{
			for(unsigned int i = 0; i < this->_size; i++)
				this->_array[i] = old._array[i];
			return *this;
		}

		T& operator [] (unsigned int i)
		{
			if (i >= _size)
				throw std::out_of_range("Out of range");
			return (_array[i]);
		}
		unsigned int	size(void)	const	{ return (_size); }
};

#endif
