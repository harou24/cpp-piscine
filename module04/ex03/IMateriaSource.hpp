#ifndef IMATERIA_SOURCE_H_
# define IMATERIA_SOURCE_H_

# include "AMateria.hpp"

class IMateriaSource {

	public:
			virtual ~IMateriaSource() {}
			virtual void learnMateria(AMateria*) = 0;
			virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif
