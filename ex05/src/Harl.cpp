#include "Harl.hpp"

void	Harl::_debug(void)
{
	std::cout << "Debug comment" << std::endl;
}

void	Harl::_info(void)
{
	std::cout << "Info comment" << std::endl;

}

void	Harl::_warning(void)
{
	std::cout << "Warning comment" << std::endl;
}

void	Harl::_error(void)
{
	std::cout << "Error comment" << std::endl;
}

void	Harl::complain(std::string level)
{
	void (Harl::*functions[])(void) =
	{
		&Harl::_debug,
		&Harl::_info,
		&Harl::_warning,
		&Harl::_error,
	};

	std::string levels[] =
	{
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			(this->*(functions[i]))();
			return;
		}
	}
	std::cout << "Unrecognized level" << std::endl;
}
