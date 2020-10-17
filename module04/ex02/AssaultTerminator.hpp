#ifndef ASSAULT_TERMINATOR_H_
# define ASSAULT_TERMINATOR_H_

# include <iostream>
# include "ISpaceMarine.hpp"

class  AssaultTerminator : public ISpaceMarine {
		
	public :
			AssaultTerminator(void);
			AssaultTerminator(const AssaultTerminator &ast);
			~AssaultTerminator();

			AssaultTerminator& operator = (const AssaultTerminator &ast);
			
			ISpaceMarine* clone(void) const;
			void battleCry(void) const;
			void rangedAttack(void) const;
			void meleeAttack(void) const;
};


#endif
