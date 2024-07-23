#include "Harl.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Usage: ./harlFilter level" << std::endl;
		return 1;
	}
	
	std::string	level = argv[1];

	Harl harl;
	harl.filter(level);
}
