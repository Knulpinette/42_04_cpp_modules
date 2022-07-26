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
        bool   operator < (const Fixed &otherPoint);
        bool   operator > (const Fixed &otherPoint);
        bool   operator <= (const Fixed &otherPoint);
        bool   operator >= (const Fixed &otherPoint);
        bool   operator == (const Fixed &otherPoint);
        bool   operator != (const Fixed &otherPoint);

        // Arithmetic operators
        Fixed   operator + (const Fixed &otherPoint);
        Fixed   operator - (const Fixed &otherPoint);
        Fixed   operator * (const Fixed &otherPoint);
        Fixed   operator / (const Fixed &otherPoint);

        Fixed& operator ++ ();       // Prefix increment operator.
        Fixed operator ++ (int);     // Postfix increment operator.

        Fixed& operator -- ();       // Prefix decrement operator.
        Fixed operator -- (int);     // Prefix increment operator.

        static Fixed& min(Fixed &point1, Fixed &point2);
        static Fixed& max(Fixed &point1, Fixed &point2);

        static const Fixed& min(const Fixed &point1, const Fixed &point2);
        static const Fixed& max(const Fixed &point1, const Fixed &point2);
        
    private:
        int 				fixedPoint;
		static const int 	fractionalBits = 8;

};

std::ostream & operator << (std::ostream &out, const Fixed &fixedPoint); // overloading function

/* Ressources on operator overloading
        https://docs.microsoft.com/en-us/cpp/cpp/increment-and-decrement-operator-overloading-cpp?view=msvc-170 

*/
#endif