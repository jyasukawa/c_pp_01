#include "Zombie.hpp"

Zombie*	newZombie( std::string name )
{
	Zombie  *zombie_heap = new Zombie(name);

	return (zombie_heap);
}

// Zombie*	newZombie( std::string name )
// {
// 	Zombie  *zombie_heap;

// 	zombie_heap = new Zombie(name);

// 	return (zombie_heap);
// }



// Zombie*	newZombie( std::string name )
// {
// 	return (new Zombie(name));
// }