#include <string>
#include <iostream>
#include <iomanip>
#include <cstddef>

class Number{
	private:
		int _value;
	public:
		Number(int n) : _value(n) {}

		bool operator == (Number const & rhs) {
			return (this->_value == rhs._value);}
		bool operator != (Number const & rhs) {
			return (this->_value != rhs._value);}
		bool operator > (Number const & rhs) {
			return (this->_value > rhs._value);}
		bool operator < (Number const & rhs) {
			return (this->_value < rhs._value);}
		bool operator >= (Number const & rhs) {
			return (this->_value >= rhs._value);}
		bool operator <= (Number const & rhs) {
			return (this->_value <= rhs._value);}

		int	getValue()const{return this->_value;}
};

std::ostream& operator << (std::ostream &output, const Number &nb)
{
	output << "Number->" << nb.getValue();
	return output;
}

template< typename T >
void	iter(T* arr, size_t len, void (*f)(T)) {
	for (int i = 0; i < len; i++) {
		f(arr[i]);
	}
}

template< typename T >
void	display(T elem) {
	std::cout  << elem << ", ";
}

int main(void)
{
	const int	int_arr[] = {4, 2, 2, 4, 8, 1994, 2020, 900, 0, 75};
	const float	float_arr[] = {4.3, 2.5, 2.4, 4.5, 8.5, 1994.0, 2020.0, 900.33333, 0.3333333, 75.45};
	const char char_arr[] = {'a', 'X', 'f', '4', '2', '0'};
	const std::string str_arr[] = {"hello", "world", "42", "Codam", "Amsterdam", "Netherlands"};
	const Number nb_arr[] = {Number(2), Number(199), Number(-10), Number(42)};
	iter(int_arr, 10, display);
	std::cout << "\n----------------------------------" << std::endl;
	iter(float_arr, 10, display);
	std::cout << "\n----------------------------------" << std::endl;
	iter(char_arr, 6, display);
	std::cout << "\n----------------------------------" << std::endl;
	iter(str_arr, 6, display);
	std::cout << "\n----------------------------------" << std::endl;
	iter(nb_arr, 4, display);
	std::cout << "\n";
	return (0);
}
