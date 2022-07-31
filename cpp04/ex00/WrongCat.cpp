#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout << "Default constructor called for WrongCat" << std::endl;
}

WrongCat::WrongCat( const WrongCat& valueToCopy )
{
	type = valueToCopy.type;
	std::cout << "Copy constructor called for WrongCat" << std::endl;
}

WrongCat& WrongCat::operator = ( const WrongCat &valueToCopy )
{
	type = valueToCopy.type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor called for WrongCat" << std::endl;
}

void	WrongCat::makeSound( void ) const
{
	std::cout << "[WRONGCAT MAKES SOUND] BEEEEEEEH!" << std::endl;
}