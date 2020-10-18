#ifndef MATERIA_SOURCE_H_
# define MATERIA_SOURCE_H

# include "AMateriaSource.hpp"
# include "IMateriaSource.hpp"
# include "Ice.hpp"
# include "Cure.hpp"

class MateriaSource : public IMateriaSource {
	
		private :
					AMateriaSource*		mSrcs[4];

		public :
				MateriaSource(void);
				MateriaSource(const MateriaSource &m);
				~MateriaSource(void);

				MateriaSource& operator = (const MateriaSource &m);

				void learnMateria(AMateria*);
				AMateria* createMateria(std::string const & type);
};

#endif
