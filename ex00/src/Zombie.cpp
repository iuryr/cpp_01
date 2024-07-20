#include <string>
#include <iostream>

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->_name = name;
	std::cout << "Constructor called for " << this->_name << std::endl;
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
