#ifndef PONY_H
# define PONY_H

# include <iostream>

class Pony {

private:
	std::string name;

public:
	Pony(std::string name);
	~Pony(void);
	void	feed(std::string food);

	void ponyOnTheStack(void);
	void ponyOnTheHeap(void);
};

#endif
