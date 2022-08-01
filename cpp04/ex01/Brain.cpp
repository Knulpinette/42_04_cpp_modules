#include "Brain.hpp"

Brain::Brain()
{
	for (int i = 0; i < 100; i++)
	{
		std::string index;
		index = i;
		ideas[i] = "Idea " + index;
	}
	std::cout << "Default constructor called for Brain" << std::endl;
}

Brain::Brain( const Brain& valueToCopy )
{
	for (int i = 0; i < 100; i++)
		ideas[i] = valueToCopy.ideas[i];
	std::cout << "Copy constructor called for Brain" << std::endl;
}

Brain& Brain::operator = ( const Brain &valueToCopy )
{
	for (int i = 0; i < 100; i++)
		ideas[i] = valueToCopy.ideas[i];
	std::cout << "Copy assignement constructor called for Brain" << std::endl;
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Destructor called for Brain" << std::endl;
}

std::string *Brain::getIdeas( void ) 
{
	return (this->ideas);
}