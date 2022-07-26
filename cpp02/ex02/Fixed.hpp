#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath> 

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

        // Comparison operators
        bool   operator < (Fixed &otherPoint);
        bool   operator > (Fixed &otherPoint);
        bool   operator <= (Fixed &otherPoint);
        bool   operator >= (Fixed &otherPoint);
        bool   operator == (Fixed &otherPoint);
        bool   operator != (Fixed &otherPoint);

        // Arithmetic operators
        Fixed   operator + (Fixed &otherPoint);
        Fixed   operator - (Fixed &otherPoint);
        Fixed   operator * (Fixed &otherPoint);
        Fixed   operator / (Fixed &otherPoint);

        Fixed& operator++();       // Prefix increment operator.
        Fixed operator++(int);     // Postfix increment operator.

        Fixed& operator--();       // Prefix decrement operator.
        Fixed operator--(int);     // Prefix increment operator.
        
/*  Add the following public static member functions overloads to your class:

    • The static member function min that takes references on two fixed point values and
    returns a reference to the smallest value, and an overload that takes references on
    two constant fixed point values and returns a reference to the smallest constant
    value.

    • The static member function max that takes references on two fixed point values
    and returns a reference to the biggest value, and an overload that takes references
    on two constant fixed point values and returns a reference to the biggest constant
    value.
*/

    private:
        int 				fixedPoint;
		static const int 	fractionalBits = 8;

};

std::ostream & operator << (std::ostream &out, const Fixed &fixedPoint); // overloading function

/* Ressources on operator overloading
        https://docs.microsoft.com/en-us/cpp/cpp/increment-and-decrement-operator-overloading-cpp?view=msvc-170 

*/
#endif