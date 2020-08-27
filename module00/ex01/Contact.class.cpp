#include "Contact.class.hpp"

Contact::Contact(void){}
Contact::~Contact(void){}

void	Contact::field(void)
{
	std::cout << "Enter fist name : " << std::endl;
	std::cin >> this->firstName;
	std::cout << "Enter last name : " << std::endl;
	std::cin >> this->lastName;
	std::cout << "Enter nickname : " << std::endl;
	std::cin >> this->nickname;
	std::cout << "Enter login : " << std::endl;
	std::cin >> this->login;
	std::cout << "Enter postal address : " << std::endl;
	std::cin >> this->postalAddress;
	std::cout << "Enter email address : " << std::endl;
	std::cin >> this->emailAddress;
	std::cout << "Enter phone number : " << std::endl;
	std::cin >> this->phoneNumber;
	std::cout << "Enter birthday date : " << std::endl;
	std::cin >> this->birthdayDate;
	std::cout << "Enter favorite meal : " << std::endl;
 	std::cin >> this->favoriteMeal;
	std::cout << "Enter underwear color : " << std::endl;
	std::cin >> this->underwearColor;
	std::cout << "Enter darkest secret : " << std::endl;
	std::cin >> this->darkestSecret;
}

void	Contact::display(void)
{
	std::cout << std::setw(10) << "| hello" << std::endl;
}

std::string		Contact::getFirstName()
{
	return (this->firstName);
}

std::string		Contact::getLastName()
{
	return (this->lastName);
}

std::string		Contact::getNickname()
{
	return (this->nickname);
}
