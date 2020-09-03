#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.class.hpp"
# define MAX 8

class Phonebook {

	private:
		Contact	contacts[MAX];
		int	nbContact;
	
	public:	
		Phonebook(void);
		~Phonebook(void);

		void	exit(void);
		void	add(Contact c);
		void	search();
		void	display(void);

		int getNbContact();
		Contact getContactAtIndex(int index);
};

#endif
