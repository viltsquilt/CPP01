#include "Zombie.hpp"

int	main(void)
{
	Zombie*	zombie;

	zombie = newZombie("Heap");
	zombie->announce();
	randomChump("Stack");
	delete(zombie);
	return (0);
}
