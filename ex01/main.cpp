#include "Zombie.hpp"

int	main()
{
	int	N = 3;

	if (N > 0)
	{
		Zombie*	zombie = zombieHorde(N, "Trevor");
		for (int i = 0; i < N; i++)
		{
			zombie[i].announce();
		}
		delete[] zombie;
	}
	return (0);
}
