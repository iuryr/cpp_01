#ifndef _HUMAN_B_
#define _HUMAN_B_

#include <iostream>

#include "Weapon.hpp"

class HumanB
{
public:
	HumanB(std::string name);
	void	setWeapon(Weapon& weapon);
	void	attack(void);

private:
	std::string _name;
	Weapon*		_weapon;
};

#endif //_HUMAN_B
