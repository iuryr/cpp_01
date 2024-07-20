#include "Zombie.h"

int main(void)
{
	std::cout << "1. Object on the heap" << std::endl;

	Zombie*	heap_zombie = newZombie("Heap Zombie");
	std::cout << "Calling announce() outside of NewZombie(name) scope"
		<< std::endl;
	heap_zombie->announce();
	std::cout << "##########" << std::endl;

	std::cout << "2. Object of the stack" << std::endl;
	randomChump("Stack Zombie");
	std::cout << "Note that the destructor of Stack Zombie was called as soon as randomChump(name) scope ended."
	<< std::endl;
	std::cout << "##########" << std::endl;

	std::cout << "3. Deleting heap object in order to eliminate leaks"
		<<std::endl;
	delete heap_zombie;
}
