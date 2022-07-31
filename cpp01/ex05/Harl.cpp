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
	std::cout << "[ERROR]\nThis is unacceptable, I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level )
{
	std::string levelList[4] = {"DEBUG", "INFO", "WARNING", "ERROR"}; //creating an index of valid commands to compare the input to.
	void (Harl::*commandsIndex[4])(void) //creating an index of functions to call for directly.
		= {
			&Harl::debug,
			&Harl::info,
			&Harl::warning,
			&Harl::error
		};

	for (int i = 0; i < 4; i++)
	{
		if (level.compare(levelList[i]) == 0)
				(this->*commandsIndex[i])();
	}
}