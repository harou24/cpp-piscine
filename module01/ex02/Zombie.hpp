#ifndef ZOMBIE_H
#define ZOMBIE_H

# include <iostream>

class Zombie {

private :
	std::string _name;
	std::string _type;

public :
	Zombie(std::string name, std::string type);
	~Zombie(void);

	void advert(void);
	void announce(void);
};
#endif
