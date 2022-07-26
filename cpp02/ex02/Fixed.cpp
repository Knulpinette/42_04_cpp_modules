#include "Fixed.hpp"
//#include <fenv.h>

Fixed::Fixed() 
		: fixedPoint(0) {}

Fixed::Fixed(const int intPoint)
{
	fixedPoint = intPoint << fractionalBits;
}

Fixed::Fixed(const float floatPoint)
{
	//feclearexcept(FE_ALL_EXCEPT);
	fixedPoint = (int)roundf(floatPoint * (1 << fractionalBits));
	//if (fetestexcept(FE_ALL_EXCEPT))
	//	std::cout << "a rounding error has occured" << std::endl;

}

Fixed::Fixed( const Fixed &pointToCopy ) 
{
	fixedPoint = pointToCopy.getRawBits();
}

Fixed& Fixed::operator = ( const Fixed &pointToCopy )
{
	fixedPoint = pointToCopy.getRawBits();
	return (*this);
}

Fixed::~Fixed() {}

int	Fixed::getRawBits( void ) const
{
	return (fixedPoint);
}

void Fixed::setRawBits( int const raw )
{
	fixedPoint = raw;
}

float	Fixed::toFloat( void ) const
{
	return (float)fixedPoint / (1 << fractionalBits);
}

int     Fixed::toInt( void ) const
{
	return (fixedPoint >> fractionalBits);
}

bool   Fixed::operator < (const Fixed &otherPoint)
{
	return (fixedPoint < otherPoint.fixedPoint);
}

bool   Fixed::operator > (const Fixed &otherPoint)
{
	return (fixedPoint > otherPoint.fixedPoint);
}

bool   Fixed::operator <= (const Fixed &otherPoint)
{
	return (fixedPoint <= otherPoint.fixedPoint);
}

bool   Fixed::operator >= (const Fixed &otherPoint)
{
	return (fixedPoint >= otherPoint.fixedPoint);
}

bool   Fixed::operator == (const Fixed &otherPoint)
{
	return (fixedPoint == otherPoint.fixedPoint);
}

bool   Fixed::operator != (const Fixed &otherPoint)
{
	return (fixedPoint != otherPoint.fixedPoint);
}

Fixed   Fixed::operator + (const Fixed &otherPoint)
{
	Fixed	newPoint;
	newPoint.setRawBits(fixedPoint + otherPoint.fixedPoint);
	return (newPoint);
}

Fixed   Fixed::operator - (const Fixed &otherPoint)
{
	Fixed	newPoint;
	newPoint.setRawBits(fixedPoint - otherPoint.fixedPoint);
	return (newPoint);
}

Fixed   Fixed::operator * (const Fixed &otherPoint)
{
	Fixed	newPoint;
	newPoint.setRawBits(fixedPoint * otherPoint.fixedPoint);
	return (newPoint);
}

Fixed   Fixed::operator / (const Fixed &otherPoint)
{
	Fixed	newPoint;
	newPoint.setRawBits(fixedPoint / otherPoint.fixedPoint);
	return (newPoint);
}

Fixed& Fixed::operator ++ ()
{
	fixedPoint++;
	return (*this);
}   

Fixed Fixed::operator ++ (int)
{
	Fixed	copyPoint;

	copyPoint.fixedPoint++;
	return (copyPoint);
}   

Fixed& Fixed::operator -- ()
{
	fixedPoint--;
	return (*this);
}   
	
Fixed Fixed::operator -- (int)
{
	Fixed	copyPoint;

	copyPoint.fixedPoint--;
	return (copyPoint);
}  

Fixed& Fixed::min(Fixed &point1, Fixed &point2)
{
	if (point1.fixedPoint < point2.fixedPoint)
		return (point1);
	return (point2);
}

Fixed& Fixed::max(Fixed &point1, Fixed &point2)
{
	if (point1.fixedPoint > point2.fixedPoint)
		return (point1);
	return (point2);
}

const Fixed& Fixed::min(const Fixed &point1, const Fixed &point2)
{
	if (point1.fixedPoint < point2.fixedPoint)
		return (point1);
	return (point2);
}

const Fixed& Fixed::max(const Fixed &point1, const Fixed &point2)
{
	if (point1.fixedPoint > point2.fixedPoint)
		return (point1);
	return (point2);
}

std::ostream & operator << (std::ostream &out, const Fixed &fixedPoint)
{
    out << fixedPoint.toFloat();
    return out;
}
 