#ifndef POWER_FIST_
# define POWER_FIST_

# include "AWeapon.hpp"

class PowerFist : public AWeapon {
	
	public :
		PowerFist(void);
		PowerFist(const PowerFist &pr);
		~PowerFist(void);

		PowerFist& operator = (const PowerFist &pr);
		
		void attack(void) const;
};

#endif
