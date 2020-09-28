#ifndef ZOMBIE_H
#define ZOMBIE_H

# include <iostream>

class Zombie {

private :
	std::string _name;
	std::string _type;

public :
	Zombie();
	Zombie(std::string name, std::string type);
	~Zombie(void);

	void advert(void);
	void announce(void);
	void setName(std::string name);
	void setType(std::string type);
	std::string getName();
	std::string getType();
};
#endif
