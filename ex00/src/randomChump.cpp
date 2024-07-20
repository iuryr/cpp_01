#include "Zombie.h"

void	randomChump(std::string name)
{
	Zombie	stack_zombie(name);
	stack_zombie.announce();
}
