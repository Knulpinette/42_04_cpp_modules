#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    public:
        Fixed();
        Fixed( const Fixed &nbToCopy );
        Fixed& operator = ( const Fixed &nbToCopy );
        ~Fixed();

        int	 getRawBits( void ) const;
		void setRawBits( int const raw );

    private:
        int 				fixedPoint;
		static const int 	fractionalBits = 8;

};

/*
**		Note on const operator
	const char c1;           //the character cannot be modified
	const char * c2;         //the character pointed at cannot be modified
	char * const c3;         //The pointer to the character cannot be modified
	const char * const c4;   //The pointer AND the character pointed at cannot be modified
*/

#endif