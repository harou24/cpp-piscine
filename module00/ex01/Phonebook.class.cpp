#include "Phonebook.class.hpp"

Phonebook::Phonebook()
{
	this->nbContact = 0;
}

Phonebook::~Phonebook()
{

}

void	Phonebook::add(Contact c)
{
	if (this->nbContact == 8)
	{
		std::cout << "No place available" << std::endl;
		return;
	}
	this->contacts[this->nbContact] = c;
	this->nbContact++;
}


void	Phonebook::display(void)
{
	int	i;

	i = 0;
	while (i < this->nbContact)
	{
		std::cout << std::setw(10) << i << "|" << std::setw(10) << this->contacts[i].getFirstName();
		std::cout << "|" << std::setw(10) << this->contacts[i].getLastName();
		std::cout << "|" << std::setw(10) << this->contacts[i].getNickname() << "|" << std::endl;
		i++;
	}
}

int main(void)
{
	Phonebook	book;
	std::string	command;
	Contact		c;
	while (1)
	{
		std::cout << "Enter a command ADD | SEARCH | EXIT" << std::endl;
		std::cin >> command;

		if (command.compare("ADD") == 0)
		{
			c.field();
			book.add(c);
		}
		else if (command.compare("SEARCH") == 0)
		{
			book.display();
		}
		else if (command.compare("EXIT") == 0)
			break ;
		
	}
	return (0);
}
