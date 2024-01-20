#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name )
{
	Zombie	*zombie_array = new Zombie[N];
	int			i;

	i = 0;
	while (i < N)
	{
		zombie_array[i].setName(name);
		i++;
	}

	return (zombie_array);
}
