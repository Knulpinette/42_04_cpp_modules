#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	brain = new Brain();
	std::cout << "Default constructor called for Cat" << std::endl;
}

Cat::Cat( const Cat& valueToCopy )
{
	type = valueToCopy.type;
	brain = new Brain(*valueToCopy.brain);
	std::cout << "Copy constructor called for Cat" << std::endl;
}

Cat& Cat::operator = ( const Cat &valueToCopy )
{
	type = valueToCopy.type;
	*brain = *valueToCopy.brain;
	return (*this);
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Destructor called for Cat" << std::endl;
}

void	Cat::makeSound( void ) const
{
	std::cout << "[CAT MAKES SOUND] MEAOOW!" << std::endl;
}