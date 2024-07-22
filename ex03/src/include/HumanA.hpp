#ifndef _HUMAN_A_
#define _HUMAN_A_

#include <iostream>

#include "Weapon.hpp"

class HumanA
{
public:
	HumanA(std::string name, Weapon& weapon);
	void attack(void);

private:
	std::string _name;
	Weapon&		_weapon;
};

#endif //_HUMAN_A
