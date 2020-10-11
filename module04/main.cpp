#include "Victim.hpp"
#include "Sorcerer.hpp"
#include "Peon.hpp"
#include "Pigeon.hpp"

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	Pigeon pig("I_am_a_pigeon");
	std::cout << robert << jim << joe << pig;
	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(pig);
	return 0;
}
