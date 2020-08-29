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
		std::cout << std::setw(10) << i << "|" << std::setw(10) << this->contacts[i].getDisplayFirstName();
		std::cout << "|" << std::setw(10) << this->contacts[i].getDisplayLastName();
		std::cout << "|" << std::setw(10) << this->contacts[i].getDisplayNickname() << "|" << std::endl;
		i++;
	}
}

int		Phonebook::getNbContact()
{
	return (this->nbContact);
}

Contact	Phonebook::getContactAtIndex(int index)
{
	return (this->contacts[index]);
}

int main(void)
{
	Phonebook	book;
	std::string	command;
	Contact		c;
	int			index;

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
			std::cout << "Choose a index : " << std::endl;
			std::cin >> index;
			if (std::cin.fail())
			{
				std::cin.clear();
				std::cin.ignore();
				std::cout << "Index error" << std::endl;
			}
			else if (index >= 0 && index < book.getNbContact())
				book.getContactAtIndex(index).display();
		}
		else if (command.compare("EXIT") == 0)
			break ;
		else
		{		
			std::cout << "Command error, Try again !" << std::endl;

		}
		
	}
	return (0);
}
