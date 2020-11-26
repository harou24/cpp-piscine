#include <iostream>
#include <string>

class Number {
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
void	swap(T& var1, T& var2) {
	T tmp = var1;
	var1 = var2;
	var2 = tmp;
}

template< typename T>
const T&	min(T& var1, T& var2) {
	return (var1 < var2 ? var1 : var2);
}

template< typename T>
const T&	max(T& var1, T& var2) {
	return (var1 > var2 ? var1 : var2);
}


int main(void)
{	
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	std::cout << "--------------------------------------------" << std::endl;

	float f1 = 2.25;
	float f2 = 3.5;
	::swap( f1, f2 );
	std::cout << "f1 = " << f1 << ", f2 = " << f2 << std::endl;
	std::cout << "min( f1, f2 ) = " << ::min( f1, f2 ) << std::endl;
	std::cout << "max( f1, f2 ) = " << ::max( f1, f2 ) << std::endl;
	
	std::cout << "--------------------------------------------" << std::endl;

	double d1 = 1.25;
	double d2 = 0.33333333;
	::swap( d1, d2 );
	std::cout << "d1 = " << d1 << ", d2 = " << d2 << std::endl;
	std::cout << "min( d1, d2 ) = " << ::min( d1, d2 ) << std::endl;
	std::cout << "max( d1, d2 ) = " << ::max( d1, d2 ) << std::endl;
	
	std::cout << "--------------------------------------------" << std::endl;

	char c1 = 'a';
	char c2 = 'z';
	::swap( c1, c2 );
	std::cout << "c1 = " << c1 << ", c2 = " << c2 << std::endl;
	std::cout << "min( c1, c2 ) = " << ::min( c1, c2 ) << std::endl;
	std::cout << "max( c1, c2 ) = " << ::max( c1, c2 ) << std::endl;

	std::cout << "--------------------------------------------" << std::endl;
	Number nb1 = Number(5);
	Number nb2 = Number(6);
	::swap(nb1,nb2);
	std::cout << "nb1 = " << nb1 << ", nb2 = " << nb2 << std::endl;
	std::cout << "min( nb1, nb2 ) = " << ::min( nb1, nb2 ) << std::endl;
	std::cout << "max( nb1, nb2 ) = " << ::max( nb1, nb2 ) << std::endl;
	return (0);
}
