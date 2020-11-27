#include "Array.hpp"

class Number {
	private:
 		int _value;
	public:
		Number(void){}
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

int main(void)
{
	Array<char> char_arr(4);
	std::cout << "char_arr array size : " <<char_arr.size() << std::endl;
	char_arr[0] = 'C';
	char_arr[1] = 'O';
	char_arr[2] = 'd';
	char_arr[3] = 'e';

	for (int i = 0; i < char_arr.size(); i++)
		std::cout << char_arr[i] << ",";

	std::cout << "\n-----------------------------" << std::endl;

	Array<std::string> str_arr(5);
	std::cout << "str_arr array size : " <<str_arr.size() << std::endl;
	str_arr[0] = "Codam";
	str_arr[1] = "42";
	str_arr[2] = "coding";
	str_arr[3] = "college";
	str_arr[4] = "Amsterdam";

	for (int i = 0; i < str_arr.size(); i++)
		std::cout << str_arr[i] << ", ";

	std::cout << "\n-----------------------------" << std::endl;
	Array<int> int_arr(8);
	std::cout << "int array size : " << int_arr.size() << std::endl;
	int_arr[0] = 42;
	int_arr[1] = 1999;
	int_arr[2] = 2020;
	int_arr[3] = 75;
	int_arr[4] = 0;
	int_arr[5] = 2020;
	int_arr[6] = 75;
	int_arr[7] = 0;

	try
	{
		for (int i = 0; i < int_arr.size() + 1; i++)
			std::cout << int_arr[i] << ", ";
	}
	catch (std::exception &e)
	{
		std::cout << "\n" << e.what() << std::endl;
	}

	std::cout << "-----------------------------" << std::endl;
	Array<float> float_arr(10);
	std::cout << "float array size : " << float_arr.size() << std::endl;
	float_arr[0] = 4.2;
	float_arr[1] = 19.99;
	float_arr[2] = 20.20;
	float_arr[3] = 7.5;
	float_arr[4] = 0.09;
	float_arr[5] = 20.20;
	float_arr[6] = 7.5;
	float_arr[7] = 0.33333333333333333;
	float_arr[8] = 0.6666;
	float_arr[9] = 0.433333333333333;

	try
	{
		for (float i = 0; i < float_arr.size() + 1; i++)
			std::cout << float_arr[i] << ", ";
	}
	catch (std::exception &e)
	{
		std::cout << "\n" << e.what() << std::endl;
	}
	std::cout << "-----------------------------" << std::endl;

	Array<Number> nb_arr(4);
	std::cout << "nb_arr array size : " <<nb_arr.size() << std::endl;
	nb_arr[0] = Number(0);
	nb_arr[1] = Number(42);
	nb_arr[2] = Number(55);
	nb_arr[3] = Number(12345);

	for (int i = 0; i < nb_arr.size(); i++)
		std::cout << nb_arr[i] << ",";
	std::cout << std::endl;
	return(0);
}
