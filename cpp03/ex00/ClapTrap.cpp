#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string newName )
			: name(newName),
				hitpoints(10),
				energypoints(10),
				attackdamage(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& valueToCopy )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = valueToCopy;
}

ClapTrap& ClapTrap::operator = ( const ClapTrap &value )
{
	name = value.name;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}