#ifndef SQUAD_H_
# define SQUAD_H_

# include <iostream>
# include "ISquad.hpp"
# include "ISpaceMarine.hpp"

class Squad : public ISquad {
		
		private :
				int _unit;
				int _size;
				ISpaceMarine	**_squad;
		public : 
				Squad(void);
				Squad(int size);
				Squad(const Squad &s);
				~Squad();

				Squad& operator = (const Squad &s);

				int getCount() const;
				ISpaceMarine* getUnit(int) const;
				int push(ISpaceMarine*);

};

#endif
