#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main(void)
{
	std::cout << "1. Test with HumanA" << std::endl;
	Weapon weapon1 = Weapon("knife");
	HumanA human_a = HumanA("Whale", weapon1);
	human_a.attack();


	std::cout << "2. Test with HumanB" << std::endl;
	HumanB human_b = HumanB("Pyra");
	human_b.attack();
	human_b.setWeapon(weapon1);
	human_b.attack();
	weapon1.setType("revolver");
	human_b.attack();

	std::cout << "3. Test from the subject.pdf" << std::endl;
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
}
