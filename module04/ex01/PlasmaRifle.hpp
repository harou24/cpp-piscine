#ifndef PLASMA_RIFLE
# define PLASMA_RIFLE

# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {
	
	public :
		PlasmaRifle(void);
		PlasmaRifle(const PlasmaRifle &pr);
		~PlasmaRifle(void);

		PlasmaRifle& operator = (const PlasmaRifle &pr);
		
		void attack(void) const;
};

#endif
