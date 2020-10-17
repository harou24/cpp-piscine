#ifndef TACTICAL_MARINE_H_
# define TACTICAL_MARINE_H_

# include <iostream>
# include "ISpaceMarine.hpp"

class  TacticalMarine : public ISpaceMarine {
		
	public :
			TacticalMarine(void);
			TacticalMarine(const TacticalMarine &ast);
			~TacticalMarine(void);

			TacticalMarine& operator = (const TacticalMarine &ast);
			
			ISpaceMarine* clone(void) const;
			void battleCry(void) const;
			void rangedAttack(void) const;
			void meleeAttack(void) const;
};


#endif
