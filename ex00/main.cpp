#include "Zombie.hpp"

int	main(void)
{
	Zombie*	zombie;

	zombie = newZombie("Heap");
	randomChump("Stack");
	delete(zombie);
	return (0);
}
