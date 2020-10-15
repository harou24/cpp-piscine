#ifndef CHARACTER_
# define CHARACTER_

# include <iostream>
# include <AWeapon.hpp>

class Character {

        private:
			std::string _name;
			unsigned int _aP;
			AWeapon::AWeapon *aw;

        public:
                Character(std::string const & name);

				[...]
				~Character();
				void recoverAP();
				void equip(AWeapon*);
				void attack(Enemy*);
				std::string [...] getName() const;
};

#endif
