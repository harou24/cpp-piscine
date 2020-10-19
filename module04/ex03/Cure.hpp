#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"
#include <string>

class	Cure : public AMateria {
	public:
		Cure();
		Cure(const Cure& other);
		Cure& operator=(const Cure& other);
		~Cure();
		
		Cure* clone() const;
		void use(ICharacter& target);

	private:
		unsigned int	_xp;
};

#endif
