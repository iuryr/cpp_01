#include "Zombie.h"

Zombie*	zombieHorde(int N, std::string name)
{
	if (N < 1)
	{
		std::cout << "N must be non-negative integer" << std::endl;
		return NULL;
	}
	else
	{
		Zombie*	array_of_zombies;

		array_of_zombies = new Zombie[N];
		for (int i = 0; i < N; i++)
		{
			array_of_zombies[i].setName(name);
		}

		return array_of_zombies;
	}
}
