#ifndef ZOMBIE_HORDE
#define ZOMBIE_HORDE

# include "Zombie.hpp"

class ZombieHorde {

	private : 
			int		_count;
			Zombie	*_zombies;
			const static std::string _names[10] = {
                                                                "Alpha",
                                                                "Beta",
                                                                "Gamma",
                                                                "Delta",
                                                                "Epsilon",
                                                                "Zeta",
                                                                "Eta",
                                                                "Theta",
                                                                "Iota",
                                                                "Kappa"
        };
		const static std::string _types[10] = {
                                                                "Magic",
                                                                "Warrior",
                                                                "Sleepy",
                                                                "Commando",
                                                                "Happy",
                                                                "Stone",
                                                                "Crazy",
                                                                "Special",
                                                                "Killer",
                                                                "Cool"
        };

	public :
			ZombieHorde(int nb);
			~ZombieHorde();
			void	announce();
};

#endif
