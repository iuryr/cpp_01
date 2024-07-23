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
	std::string levels[] =
	{
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	int i = 0;

	while (i < 4)
	{
		if (level == levels[i])
		{
			break;
		}
		i++;
	}

	switch (i)
	{
		case 0:
			this->_debug();
		case 1:
			this->_info();
		case 2:
			this->_warning();
		case 3:
			this->_error();
			break;
		default:
			std::cout << "Probably complaining about insignificant problems" << std::endl;
	}
}
