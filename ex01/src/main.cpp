#include "Zombie.h"

int main(void)
{
	std::cout << "1. Horde with non-positive number of Zombies" << std::endl;
	zombieHorde(0, "Non-ecziste");
	std::cout << "#####" << std::endl << std::endl;

	std::cout << "2. One zombie horde" << std::endl;
	Zombie* one_zombie_horde;
	one_zombie_horde = zombieHorde(1, "Zombie Norries");
	one_zombie_horde->announce();
	//uncomment below to see that only one zombie was allocated
	// one_zombie_horde[1].announce();
	delete[] one_zombie_horde;
	std::cout << "#####" << std::endl << std::endl;

	std::cout << "3. Three is a party" << std::endl;
	Zombie* party;
	party = zombieHorde(3, "DuDuduEdu");
	party->announce();
	party[1].announce();
	party[2].announce();
	delete[] party;
}
