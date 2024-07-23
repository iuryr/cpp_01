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
	void	(Harl::*functions[])() = 
	{
			&Harl::_debug,
			&Harl::_info,
			&Harl::_warning,
			&Harl::_error,
	};

	std::string	levels[] = 
	{
		"debug",
		"info", 
		"warning",
		"error"
	};
}
