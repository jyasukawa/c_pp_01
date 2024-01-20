#include "Zombie.hpp"

int	main(void)
{
	Zombie  *zombie_heap;

	zombie_heap = newZombie("Zombie Heap");
	zombie_heap->announce();
	delete zombie_heap;
	randomChump("Zombie Stack");

	return (0);
}

// __attribute__((destructor))
// static void destructor() {
//     system("leaks -q zombie");
// }