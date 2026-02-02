#include "Zombie.hpp"

int	main()
{
	int	N = 5;

	if (N > 0)
	{
		Zombie*	zombie = zombieHorde(N, "Trevor");
		delete[] zombie;
	}
	return (0);
}
