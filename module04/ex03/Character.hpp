#ifndef CHARACTER_
# define CHARACTER_

# include "ICharacter.hpp"
# include "AMateria.hpp"
# include "Ice.hpp"
# include "Cure.hpp"

class Character : public ICharacter {
		private :
					std::string _name;
					AMateria*	_inventory[4];
					int			_slot;

		public :
					Character(void);
					Character(const std::string &name);
					Character(const Character &c);
					~Character(void);

					Character& operator = (const Character &c);

					std::string const & getName() const;
					void equip(AMateria* m);
					void unequip(int idx);
					void use(int idx, ICharacter& target);
};

#endif
