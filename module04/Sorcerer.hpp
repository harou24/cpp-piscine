#ifndef SORCERER_H
# define SORCERER_H

# include <iostream>
# include "Peon.hpp"
# include <sstream>

class Sorcerer {

	private :
		std::string _name;
		std::string _title;

	public :
		Sorcerer();
		Sorcerer(std::string name, std::string title);
		Sorcerer(const Sorcerer &s);
		~Sorcerer();

		Sorcerer& operator = (const Sorcerer &s);
		

		void introduce(void) const;
		void polymorph(Victim const &) const;

		std::string getName() const;
		std::string getTitle() const;
};

std::ostream& operator << (std::ostream &output, const Sorcerer &s);

#endif
