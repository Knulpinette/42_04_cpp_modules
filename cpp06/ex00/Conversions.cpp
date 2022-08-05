#include "Conversions.hpp"

/*
    https://www.geeksforgeeks.org/types-of-literals-in-c-c-with-examples/ 

    The values assigned to each constant variable are referred to 
    as the literals. Generally, both terms, constants, and literals 
    are used interchangeably. 

    https://m.cplusplus.com/reference/cmath/isinf/ 
    https://m.cplusplus.com/reference/cmath/NAN/?kw=NAN

    ## C++ conversion type casting

	Type Conversion Operators
	C++ has four operators for type conversion. 
	They are known as type conversion operators.
			static_cast
			dynamic_cast
			const_cast
			reinterpret_cast

	https://www.tutorialspoint.com/cplusplus/cpp_casting_operators.htm 

	const_cast<type> (expr) − The const_cast operator is used to explicitly 
								override const and/or volatile in a cast. 
								The target type must be the same as the source 
								type except for the alteration of its const or 
								volatile attributes. This type of casting 
								manipulates the const attribute of the passed 
								object, either to be set or removed.
	dynamic_cast<type> (expr) − The dynamic_cast performs a runtime cast that 
								verifies the validity of the cast. If the cast 
								cannot be made, the cast fails and the expression 
								evaluates to null. A dynamic_cast performs casts 
								on polymorphic types and can cast a A* pointer into 
								a B* pointer only if the object being pointed to 
								actually is a B object.
	reinterpret_cast<type> (expr) − The reinterpret_cast operator changes a pointer 
									to any other type of pointer. It also allows 
									casting from pointer to an integer type and 
									vice versa.
	static_cast<type> (expr) − The static_cast operator performs a nonpolymorphic 
								cast. For example, it can be used to cast a base 
								class pointer into a derived class pointer.

	https://www.programiz.com/cpp-programming/type-conversion 
    stringstream (conversion from int, double etc to string)
        https://m.cplusplus.com/reference/sstream/stringstream/ 
		https://m.cplusplus.com/reference/sstream/basic_istringstream/ 

	
    */


Conversions::Conversions()
{
    std::cout << "Default constructor called for Conversions" << std::endl;
}
        
Conversions::Conversions( const std::string literal )
{

	/* 
	What is the given string ?

	Convert it to the right type
    //convertToChar(literal);
    //convertToInt(literal);
    //convertToFloat(literal);
    //convertToDouble(literal);

	Then typecast it. 
	*/

	(void)literal;

    std::cout << "String constructor called for Conversions" << std::endl;
}
        
Conversions::Conversions( const Conversions &valueToCopy)
{
	converted = valueToCopy.converted;
    std::cout << "Copy constructor called for Conversions" << std::endl;
}
        
Conversions& Conversions::operator = ( const Conversions &valueToCopy)
{
    converted = valueToCopy.converted;
    std::cout << "Copy Assignement constructor called for Conversions" << std::endl;
    return (*this);
}

Conversions::~Conversions()
{
    std::cout << "Destructor called for Conversions" << std::endl;
}   

bool	Conversions::isChar( const std::string &literal)
{
    (void)literal;
}
        
bool	Conversions::isInt( const std::string &literal)
{
    (void)literal;
}
        
bool	Conversions::isFloat( const std::string &literal)
{
    (void)literal;
}
        
bool	Conversions::isDouble( const std::string &literal)
{
    (void)literal;
}

std::string	Conversions::convertToString( int integer )
{
	std::string convertedString; 	 /* a variable to return the stream */
	std::stringstream stringstream;  /* a stringstream in which to 
									    execute the conversion. */

	stringstream << integer; 		 /* We output the integer in the stream. */
	stringstream >> convertedString; /* And then input the stream (the int
									    converted to string) in the return 
									    value. */
	return (convertedString);
}
        
void	Conversions::convertToChar( const std::string &literal)
{
    (void)literal;
}
        
void    Conversions::convertToInt( const std::string &literal)
{
    (void)literal;
}
        
void	Conversions::convertToFloat( const std::string &literal)
{
    (void)literal;
}
        
void	Conversions::convertToDouble( const std::string &literal)
{
    (void)literal;
}

void    Conversions::printConversions( void ) const
{

}
