#ifndef PIGEON_H
# define PIGEON_H

# include <iostream>
# include "Victim.hpp"

class Pigeon : public Victim{


	public :
		Pigeon(void);
		Pigeon(std::string name);
		Pigeon(const Pigeon &s);
		~Pigeon(void);

		Pigeon& operator = (const Pigeon &s);
		void getPolymorphed(void) const;
};

#endif
