#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombie_array;
	int			n;
	int			i;

	n = 7;
	zombie_array = zombieHorde(n, "zombie");
	i = 0;
	while (i < n)
	{
		zombie_array[i].announce();
		i++;
	}
	delete[] zombie_array;

	return (0);
}

// __attribute__((destructor))
// static void destructor() {
//     system("leaks -q zombie");
// }