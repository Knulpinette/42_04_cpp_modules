#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << "Default constructor called for Dog" << std::endl;
}

Dog::Dog( const Dog& valueToCopy )
{
	type = valueToCopy.type;
	std::cout << "Copy constructor called for Dog" << std::endl;
}

Dog& Dog::operator = ( const Dog &valueToCopy )
{
	type = valueToCopy.type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Destructor called for Dog" << std::endl;
}

void	Dog::makeSound( void ) const
{
	std::cout << "[DOG MAKES SOUND] WOOF!" << std::endl;
}