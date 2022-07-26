#include "Fixed.hpp"

Fixed::Fixed() 
		: fixedPoint(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed &nbToCopy ) 
{
	std::cout << "Copy constructor called" << std::endl;
	fixedPoint = nbToCopy.getRawBits();
}

Fixed& Fixed::operator = ( const Fixed &nbToCopy )
{
	std::cout << "Assignation operator called" << std::endl;
	fixedPoint = nbToCopy.getRawBits();
	return (*this);
}

Fixed::~Fixed() 
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (1);
}