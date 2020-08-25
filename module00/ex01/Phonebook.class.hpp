#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.class.hpp"
# define MAX 8

class Phonebook {

	public:
		Contact	contacts[MAX];
		int	nb_contact;
	
		Phonebook(void);

		void	exit(void);
		void	add(Contact c);
		void	search();
		void	display(void);

};

#endif
