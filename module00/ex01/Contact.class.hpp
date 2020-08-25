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

	std::string	getFirstName();
	std::string	getLastName();
	std::string	getNickname();
	std::string	getLogin();
	std::string	getPostalAddress();
	std::string	getEmailAddress();
	std::string	getPhoneNumber();
	std::string	getBirthdayDate();
	std::string	getFavoriteMeal();
	std::string	getUnderwearColor();
	std::string	getDarkestSecret();

	void setFirstName(std::string firstName);
	void setLastName(std::string lastName);
	void setNickname(std::string nickname);
	void setLogin(std::string login);
	void setPostalAddress(std::string postalAddress);
	void setEmailAddress(std::string emailAddress);
	void setPhoneNumber(std::string phoneNumber);
	void setBirthdayDate(std::string birthdayDate);
	void setFavoriteMeal(std::string favoriteMeal);
	void setUnderwearColor(std::string underwearColor);
	void setDarkestSecret(std::string darkestSecret);
};

#endif
