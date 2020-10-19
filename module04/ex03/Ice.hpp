#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"
# include "ICharacter.hpp"
# include <string>

class Ice : public AMateria {
	public:
		Ice();
		Ice(const Ice& other);
		Ice& operator=(const Ice& other);
		~Ice();
		
		Ice* clone() const;
		void use(ICharacter& target);

	private:
		unsigned int	_xp;
};

#endif
