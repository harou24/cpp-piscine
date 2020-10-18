#ifndef CURE_H_
# define CURE_H_

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria {
		
		public : 
			Cure(void);
			Cure(const Cure &ice);
			~Cure(void);

			Cure& operator = (const Cure &ice);

			AMateria* clone() const;
			void use(ICharacter& target);


};

#endif
