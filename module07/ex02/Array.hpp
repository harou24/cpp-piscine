#ifndef ARRAY_HPP_
# define ARRAY_HPP_

# include <iostream>
# include <stdexcept>

template<typename T>
class Array {
	private :
		T	**_array;
		unsigned int _size;

	public :
		Array<T>(void) : _array(0), _size(0) { }
		
		Array<T>(unsigned int n) : _array(0), _size(n)
		{	
			_array = new T*[n];
			for (unsigned int i = 0;i < _size;i++)
				_array[i] = new T();
		}

		Array<T>(Array<T> const &cpy)	{ *this = cpy; }
		
		~Array<T>(void)
		{
			for (unsigned int i = 0;i < _size;i++)
				delete _array[i];
			delete [] _array;
		}

		Array<T>& operator = (Array<T> const &old)
		{
			_size = old.size();
			T *a = new T*[_size];
			for (int i = 0;i < _size;i++)
				a[i] = new T(old[i]);
			return (*this);
		}

		T& operator [] (unsigned int i)
		{
			if (i >= _size)
				throw std::out_of_range("Out of range");
			return (*_array[i]);
		}

		unsigned int	size(void)	const	{ return (_size); }

};

#endif
