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
