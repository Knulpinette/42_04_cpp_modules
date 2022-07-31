#include "Harl.hpp"

Harl::Harl() {}
Harl::~Harl() {}

void Harl::debug( void )
{
	std::cout << "[DEBUG]" << std::endl 
				<< "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl 
				<< "I just love it!" 
				<< std::endl;
}

void Harl::info( void ) 
{
	std::cout << "[INFO]" << std::endl 
				<< "I cannot believe adding extra bacon cost more money." << std::endl 
				<< "You don’t put enough!" << std::endl 
				<< "If you did I would not have to ask for it!" 
				<< std::endl;
}

void Harl::warning( void )
{
	std::cout << "[WARNING]" << std::endl 
				<< "I think I deserve to have some extra bacon for free." << std::endl 
				<< "I’ve been coming here for years and you just started working here last month." 
				<< std::endl;
}

void Harl::error( void )
{
	std::cout << "[ERROR]\nThis is unacceptable, I want to speak to the manager now." 
				<< std::endl;
}

void Harl::complain( std::string level )
{
	std::string levelList[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*commandsIndex[4])(void)
		= {
			&Harl::debug,
			&Harl::info,
			&Harl::warning,
			&Harl::error,
		};
	int	index;

	for (index = 0; index < 4; index++)
	{
		if (level.compare(levelList[index]) == 0)
			break;
	}
	switch (index)
	{
		case 0:
			(this->*commandsIndex[index++])();
		case 1:
			(this->*commandsIndex[index++])();
		case 2:
			(this->*commandsIndex[index++])();
		case 3:
			(this->*commandsIndex[index++])();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}