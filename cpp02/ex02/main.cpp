#include "Fixed.hpp"

int main( void ) 
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed const c( Fixed( 5.05f ) - Fixed( 2 ) );

	std::cout << "a: " << a << std::endl;
	std::cout << "++a: " << ++a << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "a++: " << a++ << std::endl;

	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "c: " << c << std::endl;

	std::cout << "max: " << Fixed::max( a, b ) << std::endl;
	std::cout << "min: " << Fixed::min( a, b ) << std::endl;

	if (a > b)
		std::cout << "a > b" << std::endl;
	if (a < b)
		std::cout << "a < b" << std::endl;
	if (a >= b)
		std::cout << "a >= b" << std::endl;
	if (a <= b)
		std::cout << "a <= b" << std::endl;
	if (a == b)
		std::cout << "a == b" << std::endl;
	if (a != b)
		std::cout << "a != b" << std::endl;
	return (0);
}

/*
0
0.00390625
0.00390625
0.00390625
0.0078125
10.1016
10.1016
*/