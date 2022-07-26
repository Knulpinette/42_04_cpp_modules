#include "Fixed.hpp"

/* 
	https://inst.eecs.berkeley.edu//~cs61c/sp06/handout/fixedpt.html 
A careful reader should now realize the bit pattern of 53 and 26.5 is exactly the same. 
The only difference, is the position of binary point. In the case of 5310, there is "no"
binary point. Alternatively, we can say the binary point is located at the far right, at 
position 0. (Think in decimal, 53 and 53.0 represents the same number.)
You have to shift the bit by one to half the number or move the binary point once to the left.
*/

int main( void ) 
{
	Fixed a;
	Fixed b( a );
	Fixed c;

	c = b;

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	return 0;
}
