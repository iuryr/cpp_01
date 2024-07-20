#ifndef _ZOMBIE_HPP_
#define _ZOMBIE_HPP_

#include <string>
#include <iostream>

class	Zombie
{
	private:
		std::string	_name;

	public:
		void	announce(void);
		void	setName(std::string name);
		Zombie();
		~Zombie();
};

#endif //_ZOMBIE_HPP_
