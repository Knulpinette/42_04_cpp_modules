#include "A_Animal.hpp"

A_Animal::A_Animal()
		: type("Animal")
{
	std::cout << "Default constructor called for A_Animal" << std::endl;
}

A_Animal::A_Animal( const A_Animal& valueToCopy )
		: type(valueToCopy.type)
{
	std::cout << "Copy constructor called for A_Animal" << std::endl;
}

A_Animal& A_Animal::operator = ( const A_Animal &valueToCopy )
{
	type = valueToCopy.type;
	return (*this);
}

A_Animal::~A_Animal()
{
	std::cout << "Destructor called for A_Animal" << std::endl;
}

std::string	A_Animal::getType() const
{
	return(this->type);
}

void	A_Animal::makeSound( void ) const
{
	std::cout << "[A_ANIMAL MAKES SOME SOUND]" << std::endl;
}