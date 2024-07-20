#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Default constructor called." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Destructor for " << this->_name << " called." << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->_name;
	std::cout << ": BraiiiiiiinnnzzzZ.." << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}
