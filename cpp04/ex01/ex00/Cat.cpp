#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << "Default constructor called for Cat" << std::endl;
}

Cat::Cat( const Cat& valueToCopy )
{
	type = valueToCopy.type;
	std::cout << "Copy constructor called for Cat" << std::endl;
}

Cat& Cat::operator = ( const Cat &valueToCopy )
{
	type = valueToCopy.type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Destructor called for Cat" << std::endl;
}

void	Cat::makeSound( void ) const
{
	std::cout << "[CAT MAKES SOUND] MEAOOW!" << std::endl;
}