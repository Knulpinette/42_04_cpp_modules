#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath> 
/*      allowed function: float roundf( float x );
    The roundf() functions return x rounded to the nearest integer n, 
    rounding halfway cases away from zero, regardless of the current 
    rounding direction (i.e., returning the value with larger magnitude 
    if |n − x| == 1/2).
    Call feclearexcept(FE_ALL_EXCEPT) before calling round(), roundf(), or roundl().
    On return, if fetestexcept(FE_ALL_EXCEPT) is nonzero, then an error has occurred.
*/

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

std::ostream & operator << (std::ostream &out, const Fixed &fixedPoint); // overloading function

/*
**		Note on overload operator
	Operators (+, -, <<, etc) are built to work with built-in data-types (int, char etc).
    But it's possible to make them work with manually-made data-types by overloading them.
    Redefining the meaning of operators really does not change their original meaning;
    instead, they have been given additional meaning along with their existing ones.

    We can overload

        Binary Arithmetic     ->     +, -, *, /, %
        Unary Arithmetic     ->     +, -, ++, —
        Assignment     ->     =, +=,*=, /=,-=, %=
        Bit- wise      ->     & , | , << , >> , ~ , ^
        De-referencing     ->     (->)
        Dynamic memory allocation and De-allocation     ->     New, delete 
        Subscript     ->     [ ]
        Function call     ->     ()
        Logical      ->     &,  | |, !
        Relational     ->     >, < , = =, <=, >=
        
    Some CANNOT be:

        Scope resolution operator       : :
        Member selection operator                               
        Member selection through        * 
        Pointer to member variable

        Conditional operator           ? :
        Sizeof operator                sizeof()

        // to know why -> https://www.geeksforgeeks.org/operator-overloading-c/ 
*/

#endif