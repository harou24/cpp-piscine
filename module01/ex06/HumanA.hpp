#ifndef HUMANA_H
# define HUMANA_H

#include "Weapon.hpp"

class HumanA {

	private :
			Weapon *_w;
			std::string _name;

	public :
			HumanA(std::string name, Weapon &w);
			~HumanA();

			void attack() const;
};

#endif
