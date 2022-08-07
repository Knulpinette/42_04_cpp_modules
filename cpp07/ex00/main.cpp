#include "whatever.hpp"

/*int main( void ) {
	int a = 2;
	int b = 3;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}*/

int main()
{
    int     integer1 = 10;
    int     integer2 = 5;
    
    std::cout << "value 1: " << integer1 << std::endl
				<< "value 2: " << integer2 << std::endl;
    std::cout << "minimum: " << ::min(integer1, integer2) << std::endl;
	std::cout << "maximum: " << ::max(integer1, integer2) << std::endl;
	::swap(integer1, integer2);
	std::cout << "swap" << std::endl
				<< "value 1: " << integer1 << std::endl
				<< "value 2: " << integer2 << std::endl 
				<< std::endl;

    char    character1 = 'a';
    char    character2 = 'b';
	std::cout << "value 1: " << character1 << std::endl
				<< "value 2: " << character2 << std::endl;
    std::cout << "minimum: " << ::min(character1, character2) << std::endl;
	std::cout << "maximum: " << ::max(character1, character2) << std::endl;
	::swap(character1, character2);
	std::cout << "swap" << std::endl
				<< "value 1: " << character1 << std::endl
				<< "value 2: " << character2 << std::endl 
				<< std::endl;

	std::string	string1 = "123456789";
    std::string	string2 = "hello world";
	std::cout << "value 1: " << string1 << std::endl
				<< "value 2: " << string2 << std::endl;
    std::cout << "minimum: " << ::min(string1, string2) << std::endl;
	std::cout << "maximum: " << ::max(string1, string2) << std::endl;
	::swap(string1, string2);
	std::cout << "swap" << std::endl
				<< "value 1: " << string1 << std::endl
				<< "value 2: " << string2 << std::endl 
				<< std::endl;
}