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

void	Harl::filter(std::string level)
{
	int	i = 0;

	if (level.compare("DEBUG") == 0)
		i = 1;
	else if (level.compare("INFO") == 0)
		i = 2;
	else if (level.compare("WARNING") == 0)
		i = 3;
	else if (level.compare("ERROR") == 0)
		i = 4;

	switch (i)
	{
		case 1:
			this->_debug();
		case 2:
			this->_info();
		case 3:
			this->_warning();
		case 4:
			this->_error();
			break;
		default:
			std::cout << "Probably complaining about insignificant problems" << std::endl;
	}
}
