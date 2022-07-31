#include "Harl.hpp"

int	main( void )
{
	Harl		Harl;

	std::cout << std::endl;
	Harl.complain("DEBUG");
	std::cout << std::endl;
	Harl.complain("INFO");
	std::cout << std::endl;
	Harl.complain("WARNING");
	std::cout << std::endl;
	Harl.complain("ERROR");
	std::cout << std::endl;
	return (0);
}