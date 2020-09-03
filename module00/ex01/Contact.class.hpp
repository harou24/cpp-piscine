#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <iomanip>

class Contact {

private:
	std::string	firstName;
	std::string	lastName;
	std::string	nickname;
	std::string	login;
	std::string	postalAddress;
	std::string	emailAddress;
	std::string	phoneNumber;
	std::string	birthdayDate;
	std::string	favoriteMeal;
	std::string	underwearColor;
	std::string	darkestSecret;

public:
	Contact(void);
	~Contact(void);

	void	field(void);
	void	display(void);

	std::string	getDisplayFirstName();
	std::string	getDisplayLastName();
	std::string	getDisplayNickname();
	
	std::string	getFirstName();
	std::string	getLastName();
	std::string	getNickname();
	
	};

#endif
