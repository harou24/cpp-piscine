#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "AMateria.hpp"
# include <string>

class MateriaSource : public IMateriaSource
{
public:
	MateriaSource();
	MateriaSource(const MateriaSource& other);
	MateriaSource& operator=(const MateriaSource& other);
	~MateriaSource();
	
	void	learnMateria(AMateria* m);
	AMateria* createMateria(std::string const &type);
private:
	int			_count;
	AMateria*	_materias[5];
};

#endif
