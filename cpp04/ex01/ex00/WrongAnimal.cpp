#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
		: type("WrongAnimal")
{
	std::cout << "Default constructor called for WrongAnimal" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& valueToCopy )
		: type(valueToCopy.type)
{
	std::cout << "Copy constructor called for WrongAnimal" << std::endl;
}

WrongAnimal& WrongAnimal::operator = ( const WrongAnimal &valueToCopy )
{
	type = valueToCopy.type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor called for WrongAnimal" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return(this->type);
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "[WRONGANIMAL MAKES WRONG SOUND]" << std::endl;
}