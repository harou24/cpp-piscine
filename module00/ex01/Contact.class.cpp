#include "Contact.class.hpp"

Contact::Contact(void){}
Contact::~Contact(void){}

void	Contact::field(void)
{
	std::cout << "Enter fist name : " << std::endl;
	std::cin.ignore();
	std::getline(std::cin, this->firstName);
	std::cout << "Enter last name : " << std::endl;
	std::cin.ignore();
	std::getline(std::cin,this->lastName);
	std::cout << "Enter nickname : " << std::endl;
	std::cin.ignore();
	std::getline(std::cin, this->nickname);
	std::cout << "Enter login : " << std::endl;
	std::cin.ignore();	
	std::getline(std::cin, this->login);
	std::cout << "Enter postal address : " << std::endl;
	std::cin.ignore();
	std::getline(std::cin, this->postalAddress);
	std::cout << "Enter email address : " << std::endl;
	std::cin.ignore();
	std::getline(std::cin, this->emailAddress);
	std::cout << "Enter phone number : " << std::endl;
	std::cin.ignore();
	std::getline(std::cin, this->phoneNumber);
	std::cout << "Enter birthday date : " << std::endl;
	std::cin.ignore();
	std::getline(std::cin, this->birthdayDate);
	std::cout << "Enter favorite meal : " << std::endl;
	std::cin.ignore();
	std::getline(std::cin, this->favoriteMeal);
	std::cout << "Enter underwear color : " << std::endl;
	std::cin.ignore();
	std::getline(std::cin, this->underwearColor);
	std::cout << "Enter darkest secret : " << std::endl;
	std::cin.ignore();
	std::getline(std::cin, this->darkestSecret);
}

void	Contact::display(void)
{
	std::cout << "First name : "<< this->firstName << std::endl;
	std::cout << "Last name : "<< this->lastName << std::endl;
	std::cout << "Nickname : "<< this->nickname << std::endl;
	std::cout << "Login : "<< this->login << std::endl;
	std::cout << "Postal address : "<< this->postalAddress << std::endl;
	std::cout << "Email address : "<< this->emailAddress << std::endl;
	std::cout << "Phone number : "<< this->phoneNumber << std::endl;
	std::cout << "Birthday date : "<< this->birthdayDate << std::endl;
	std::cout << "Favorite meal : "<< this->favoriteMeal << std::endl;
	std::cout << "Underwear color : "<< this->underwearColor << std::endl;
	std::cout << "Darkest secret : "<< this->darkestSecret << std::endl;
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

std::string		Contact::getDisplayFirstName()
{
	std::string displayFirstName;

	if (this->firstName.length() < 10)
		displayFirstName = this->firstName;
	else
	{	
		displayFirstName = std::string(this->firstName, 0, 10);
		displayFirstName = displayFirstName.replace(9, 1, ".");
	}
	return (displayFirstName);
}

std::string		Contact::getDisplayLastName()
{
	std::string displayLastName;

	if (this->lastName.length() < 10)
		displayLastName = this->lastName;
	else
	{
		displayLastName = std::string(this->lastName, 0, 10);
		displayLastName = displayLastName.replace(9, 1, ".");
	}
	return (displayLastName);

}

std::string		Contact::getDisplayNickname()
{
	std::string displayNickname;

	if (this->nickname.length() < 10)
		displayNickname = this->nickname;
	else
	{
		displayNickname = std::string(this->nickname, 0, 10);
		displayNickname = displayNickname.replace(9, 1, ".");
	}
	return (displayNickname);

}
