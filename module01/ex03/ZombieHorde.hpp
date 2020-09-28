#ifndef ZOMBIE_HORDE
#define ZOMBIE_HORDE

# include "Zombie.hpp"

class ZombieHorde {

	private : 
			int		_count;
			Zombie	*_zombies;
			static std::string _names[10]; 
			static std::string _types[10];

	public :
			ZombieHorde(int nb);
			~ZombieHorde();
			void	announce();
};

#endif
