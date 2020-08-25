#include "Phonebook.class.hpp"

Phonebook::Phonebook()
{
	this->nb_contact = 0;
}

void	Phonebook::add(Contact c)
{
	if (this->nb_contact == 8)
	{
		std::cout << "No place available" << std::endl;
		return;
	}
	this->contacts[this->nb_contact] = c;
	this->nb_contact++;
}

void	Phonebook::display(void)
{
	int	i;

	i = 0;
	while (i < this->nb_contact)
	{
		std::cout << std::setw(10) << i << "|" << std::setw(10) << this->contacts[i].firstName;
		std::cout << "|" << std::setw(10) << this->contacts[i].lastName;
		std::cout << "|" << std::setw(10) << this->contacts[i].nickname << "|" << std::endl;
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
