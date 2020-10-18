#ifndef AMATERIA_H_
# define AMATERIA_H_

# include <iostream>
# include "ICharacter.hpp"

class AMateria {

	private:
			unsigned int _xp;
			std::string _type;
	public:
		AMateria(void);
		AMateria(std::string const & type);
		AMateria(const AMateria &am);
		virtual ~AMateria();
		
		AMateria& operator = (const AMateria &am);

		std::string const & getType() const; //Returns the materia type
		unsigned int getXP() const; //Returns the Materia's XP
		
		void setXP(unsigned int val);
		
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter &target);
};

#endif
