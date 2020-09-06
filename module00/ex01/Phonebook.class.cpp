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
		std::cout << "\n----No place available----\n" << std::endl;
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
	
	std::cout << "\n----------Welcome to my Awesome Phonebook !----------\n\n" << std::endl;
	while (1)
	{
		if(std::cin.eof())
		{
			std::cin.clear();
			std::cout << "-_-If you want to play like that, all right, good bye !-_-\n" << std::endl;
			std::cin.sync();
			break ;
		}

		std::cout << "*** Enter a command ADD | SEARCH | EXIT ***\n" << std::endl;
		std::getline(std::cin, command);	

		if (command.compare("ADD") == 0)
		{
			c.field();
			book.add(c);
		}
		else if (command.compare("SEARCH") == 0)
		{
			if (book.getNbContact() == 0)
			{
				std::cout << "Phonebook is empty !\n" << std::endl;

			}
			else
			{
				book.display();
				std::cout << "Choose a index : \n" << std::endl;
				std::cin >> index;
				if (std::cin.fail() || !(index >= 0 && index < book.getNbContact()))
				{
					if (std::cin.fail())
						std::cout << "---Wrong input---\n" << std::endl;
					else
						std::cout << "---Index error---\n" << std::endl;
				}
				else if (index >= 0 && index < book.getNbContact())
					book.getContactAtIndex(index).display();
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

			}
		}
		else if (command.compare("EXIT") == 0)
		{
			std::cout << "\n----------------------Good Bye !-----------------------\n" << std::endl;
			break ;

		}
	}
	return (0);
}
