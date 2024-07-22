#ifndef _WEAPON_HPP_
#define _WEAPON_HPP_

#include <string>

class	Weapon
{
public:
	Weapon(std::string type);
	const std::string&		getType(void) const;
	void					setType(std::string type);

private:
	std::string	_type;
};

#endif // _WEAPON_HPP_
