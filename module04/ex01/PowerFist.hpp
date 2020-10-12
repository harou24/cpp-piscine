#ifndef PLASMA_RIFLE
# define PLASMA_RIFLE

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
