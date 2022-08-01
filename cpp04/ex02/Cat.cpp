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
	std::cout << "Copy assignement constructor called for Cat" << std::endl;
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

void	Cat::thinks( void ) const
{
	std::cout << brain->getIdeas()[33] << std::endl;
	std::cout << brain->getIdeas()[40] << std::endl;
	std::cout << brain->getIdeas()[52] << std::endl;
	std::cout << brain->getIdeas()[99] << std::endl;
}