#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	brain = new Brain();
	std::cout << "Default constructor called for Dog" << std::endl;
}

/* This is a shallow copy. We are copying the original data of the object
	to a new instance of it. We are creating a whole new seprated object.
	If a variable is allocated on the heap, we need to allocate new memory
	to the copy.
	*/

Dog::Dog( const Dog& valueToCopy )
{
	type = valueToCopy.type;
	brain = new Brain(*valueToCopy.brain); 
	std::cout << "Copy constructor called for Dog" << std::endl;
}

Dog& Dog::operator = ( const Dog &valueToCopy ) // 
{
	type = valueToCopy.type;
	*brain = *valueToCopy.brain;
	std::cout << "Copy assignement constructor called for Dog" << std::endl;
	return (*this);
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Destructor called for Dog" << std::endl;
}

void	Dog::makeSound( void ) const
{
	std::cout << "[DOG MAKES SOUND] WOOF!" << std::endl;
}

void	Dog::thinks( void ) const
{
	std::cout << brain->getIdeas()[35] << std::endl;
	std::cout << brain->getIdeas()[45] << std::endl;
	std::cout << brain->getIdeas()[72] << std::endl;
	std::cout << brain->getIdeas()[80] << std::endl;
}