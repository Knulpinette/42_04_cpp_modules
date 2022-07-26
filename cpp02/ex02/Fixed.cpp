#include "Fixed.hpp"
//#include <fenv.h>

Fixed::Fixed() 
		: fixedPoint(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int intPoint)
{
	std::cout << "Int constructor called" << std::endl;
	fixedPoint = intPoint << fractionalBits;
}

Fixed::Fixed(const float floatPoint)
{
	std::cout << "Float constructor called" << std::endl;
	//feclearexcept(FE_ALL_EXCEPT);
	fixedPoint = (int)roundf(floatPoint * (1 << fractionalBits));
	//if (fetestexcept(FE_ALL_EXCEPT))
	//	std::cout << "a rounding error has occured" << std::endl;

}

Fixed::Fixed( const Fixed &pointToCopy ) 
{
	std::cout << "Copy constructor called" << std::endl;
	fixedPoint = pointToCopy.getRawBits();
}

Fixed& Fixed::operator = ( const Fixed &pointToCopy )
{
	std::cout << "Assignation operator called" << std::endl;
	fixedPoint = pointToCopy.getRawBits();
	return (*this);
}

Fixed::~Fixed() 
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (fixedPoint);
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	fixedPoint = raw;
}

float	Fixed::toFloat( void ) const
{
	std::cout << "toFloat member function called" << std::endl;
	return (float)fixedPoint / (1 << fractionalBits);
}

int     Fixed::toInt( void ) const
{
	std::cout << "toInt member function called" << std::endl;
	return (fixedPoint >> fractionalBits);
}

bool   Fixed::operator < (Fixed &otherPoint)
{

}

bool   Fixed::operator > (Fixed &otherPoint)
{

}

bool   Fixed::operator <= (Fixed &otherPoint)
{

}

bool   Fixed::operator >= (Fixed &otherPoint)
{

}

bool   Fixed::operator == (Fixed &otherPoint)
{

}

bool   Fixed::operator != (Fixed &otherPoint)
{

}


Fixed   Fixed::operator + (Fixed &otherPoint)
{

}

Fixed   Fixed::operator - (Fixed &otherPoint)
{

}

Fixed   Fixed::operator * (Fixed &otherPoint)
{

}

Fixed   Fixed::operator / (Fixed &otherPoint)
{

}


Fixed& Fixed::operator++()
{

}   

Fixed Fixed::operator++(int)
{

}   


Fixed& Fixed::operator--()
{

}   

		
Fixed Fixed::operator--(int)
{

}   


std::ostream & operator << (std::ostream &out, const Fixed &fixedPoint)
{
    out << fixedPoint.toFloat();
    return out;
}
 