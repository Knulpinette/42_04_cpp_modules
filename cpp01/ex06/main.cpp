#include "Karen.hpp"

int	main( int argc, char **argv )
{
	Karen	Karen;
	if (argc != 2)
	{
		std::cout << "Error: wrong number of arguments." << std::endl
					<< "./karen_filter FILTER" << std::endl;
		return (1);
	}
	Karen.complain(argv[1]);
	return (0);
}