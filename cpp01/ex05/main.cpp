#include "Karen.hpp"

int	main( void )
{
	Karen		Karen;

	std::cout << std::endl;
	Karen.complain("DEBUG");
	std::cout << std::endl;
	Karen.complain("INFO");
	std::cout << std::endl;
	Karen.complain("WARNING");
	std::cout << std::endl;
	Karen.complain("ERROR");
	std::cout << std::endl;
	return (0);
}