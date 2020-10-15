#ifndef AWEAPON_H
# define AWEAPON_H

#include <iostream>

class AWeapon {
	private:
			std::string _name;
			unsigned int _damage;
			unsigned int _ap;

	public:
			AWeapon(void);
			AWeapon(std::string const & name, int apcost, int damage);
			AWeapon(const AWeapon &w);
			virtual ~AWeapon(void);
			
			AWeapon& operator = (const AWeapon &ft);

			std::string const getName(void) const;
			int getAPCost(void) const;
			int getDamage(void) const;
			void setName(std::string name);
			void setDamage(unsigned int damage);
			void setAPCost(unsigned int ap);
			virtual void attack(void) const = 0;
};

#endif
