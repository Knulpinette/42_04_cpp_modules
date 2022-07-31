#include "Animal.hpp"

Animal::Animal()
		: type("Animal")
{
	std::cout << "Default constructor called for Animal" << std::endl;
}

Animal::Animal( const Animal& valueToCopy )
		: type(valueToCopy.type)
{
	std::cout << "Copy constructor called for Animal" << std::endl;
}

Animal& Animal::operator = ( const Animal &valueToCopy )
{
	type = valueToCopy.type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Destructor called for Animal" << std::endl;
}

std::string	Animal::getType() const
{
	return(this->type);
}

void	Animal::makeSound( void ) const
{
	std::cout << "[ANIMAL MAKES SOUND]" << std::endl;
}