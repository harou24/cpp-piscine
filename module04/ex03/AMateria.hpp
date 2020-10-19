#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "ICharacter.hpp"
# include <iostream>
# include <string>

class	ICharacter;

class	AMateria {

	public:
		AMateria();
		AMateria(std::string const & type);
		AMateria(const AMateria &other);
		AMateria& operator=(const AMateria& other);
		virtual ~AMateria();
		
		std::string const& getType() const;
		unsigned int getXP() const;

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);

	protected:
		std::string		_type;

	private:
		unsigned int	_xp;
};

#endif
