#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath> // float roundf( float x );
// The roundf() functions return x rounded to the nearest integer n, 
// rounding halfway cases away from zero, regardless of the current 
// rounding direction (i.e., returning the value with larger magnitude 
// if |n − x| == 1/2).
// Call feclearexcept(FE_ALL_EXCEPT) before calling round(), roundf(), or roundl().
// On return, if fetestexcept(FE_ALL_EXCEPT) is nonzero, then an error has occurred.

class Fixed
{
    public:
        Fixed();
        Fixed( const int intPoint );
        Fixed( const float floatPoint );
        Fixed( const Fixed &pointToCopy );
        Fixed& operator = ( const Fixed &pointToCopy );
        ~Fixed();

        int	    getRawBits( void ) const;
		void    setRawBits( int const raw );
        float   toFloat( void ) const;
        int     toInt( void ) const; 

    private:
        int 				fixedPoint;
		static const int 	fractionalBits = 8;

};

std::ostream & operator << (std::ostream &out, const Fixed &fixedPoint);

/*
**		Note on const operator
	const char c1;           //the character cannot be modified
	const char * c2;         //the character pointed at cannot be modified
	char * const c3;         //The pointer to the character cannot be modified
	const char * const c4;   //The pointer AND the character pointed at cannot be modified
*/

#endif