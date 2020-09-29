#ifndef HUMANB_H
# define HUMANB_H

#include "Weapon.hpp"

class HumanB {

	private :
			Weapon *_w;
			std::string _name;

	public :
			HumanB(std::string name);
			~HumanB();

			void attack() const;
			void setWeapon(Weapon &w);
};

#endif
