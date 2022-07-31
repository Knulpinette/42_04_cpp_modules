#include "Brain.hpp"

Brain::Brain()
		: ideas(0)
{
	std::cout << "Default constructor called for Brain" << std::endl;
}

Brain::Brain( const Brain& valueToCopy )
		: ideas(valueToCopy.ideas)
{
	std::cout << "Copy constructor called for Brain" << std::endl;
}

Brain& Brain::operator = ( const Brain &valueToCopy )
{
	ideas = valueToCopy.ideas;
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Destructor called for Brain" << std::endl;
}

