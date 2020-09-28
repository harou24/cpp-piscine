#ifndef BRAIN_H
# define BRAIN_H

#include <iostream>

class Brain {

	private :
			int _speed;
			int _temperature;
			int _iq;

	public :
			Brain();
			~Brain();
			std::string identify(void) const;



};

#endif
