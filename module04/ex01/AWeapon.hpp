#ifndef AWEAPON_H
# define AWEAPON_H

#include <iostream>

class AWeapon {
	private:
			std::string _name;
			unsigned int _damage;
			unsigned int _ap;

	public:
			AWeapon(std::string const & name, int apcost, int damage);
			AWeapon(const AWeapon &w);
			virtual ~AWeapon();
			
			AWeapon& operator = (const AWeapon &ft);

			std::string const getName() const;
			int getAPCost() const;
			int getDamage() const;
			void setName(std::string name);
			void setDamage(unsigned int damage);
			void setAPCost(unsigned int ap);
			virtual void attack() const = 0;
};

#endif
