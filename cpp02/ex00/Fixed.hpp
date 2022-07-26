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

        int getRawBits(void) const;

    private:
        int fixedPoint;

};

#endif