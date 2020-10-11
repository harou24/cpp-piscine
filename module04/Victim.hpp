#ifndef VICTIM_H
# define VICTIM_H

# include <iostream>
# include <sstream>

class Victim {

	private :
		std::string _name;

	public :
		Victim(void);
		Victim(std::string name);
		Victim(const Victim &s);
		~Victim(void);

		Victim& operator = (const Victim &s);
		
		void introduce(void) const;
		virtual	void getPolymorphed(void) const;

		std::string getName() const;
		void setName(const std::string name);
};

std::ostream& operator << (std::ostream &output, const Victim &s);

#endif
