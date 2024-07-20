#ifndef _ZOMBIE_HPP_
#define _ZOMBIE_HPP_

#include <string>

class	Zombie
{
	private:
		std::string	_name;
		Zombie();

	public:
		void	announce(void);
		Zombie(std::string name);
		~Zombie();
};

#endif //_ZOMBIE_HPP_
