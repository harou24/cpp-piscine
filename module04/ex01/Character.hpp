#ifndef CHARACTER_
# define CHARACTER_

# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character {

        private:
				std::string _name;
				unsigned int _aP;
				AWeapon *_weapon;

        public:
                Character(void);
				Character(std::string const & name);
				Character(const Character &c);
				~Character(void);

				Character& operator = (const Character &c);

				void recoverAP(void);
				void equip(AWeapon*);
				void attack(Enemy*);
				std::string const getName(void) const;
};

std::ostream& operator << (std::ostream &output, const Character &c);

#endif
