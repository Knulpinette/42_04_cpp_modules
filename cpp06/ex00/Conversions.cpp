#include "Conversions.hpp"

/*
    https://www.geeksforgeeks.org/types-of-literals-in-c-c-with-examples/ 

    The values assigned to each constant variable are referred to 
    as the literals. Generally, both terms, constants, and literals 
    are used interchangeably. 

    https://m.cplusplus.com/reference/cmath/isinf/ 
    https://m.cplusplus.com/reference/cmath/NAN/?kw=NAN
		- 1/0 = ∞ 			|| 1. / 0.
		- log (0) = -∞ 		|| -1. / 0.
		- sqrt (-1) = NaN 	|| std::numeric_limits<float/double>::quiet_NaN

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


Conversions::Conversions() {} // this constructor is private.
        
Conversions::Conversions( const std::string literal )
{
	std::cout << "String constructor called for Conversions" << std::endl;

	/* Preparing conversion table */
	for (int i = 0; i < NB_TYPE_CONVERSIONS; i++)
		conversion_table[i].status = NOT_CONVERTED; /* for future printing purposes */
	conversion_table[T_CHAR].conversionFunction = &Conversions::convertToChar;
	conversion_table[T_INT].conversionFunction = &Conversions::convertToInt;
	conversion_table[T_FLOAT].conversionFunction = &Conversions::convertToFloat;
	conversion_table[T_DOUBLE].conversionFunction = &Conversions::convertToDouble;
	conversion_table[T_NO_TYPE].conversionFunction = &Conversions::allImpossible;

	/* calling the right conversion function by getting its type */
	(this->*(conversion_table[getType(literal)].conversionFunction))(literal);
}
        
Conversions::Conversions( const Conversions &valueToCopy)
{
	for (size_t i = 0; i < NB_TYPE_CONVERSIONS; i++)
		conversion_table[i].status = valueToCopy.conversion_table[i].status;
	converted = valueToCopy.converted;
    std::cout << "Copy constructor called for Conversions" << std::endl;
}
        
Conversions& Conversions::operator = ( const Conversions &valueToCopy)
{
	for (size_t i = 0; i < NB_TYPE_CONVERSIONS; i++)
		conversion_table[i].status = valueToCopy.conversion_table[i].status;
    converted = valueToCopy.converted;
    std::cout << "Copy Assignement constructor called for Conversions" << std::endl;
    return (*this);
}

Conversions::~Conversions()
{
    std::cout << "Destructor called for Conversions" << std::endl;
}   

Conversions::t_types	Conversions::getType( const std::string &literal )
{
	if (isChar(literal))
		return (T_CHAR);
	else if (isInt(literal))
		return (T_INT);
	else if (isFloat(literal))
		return (T_FLOAT);
	else if (isDouble(literal))
		return (T_DOUBLE);
	else
		return (T_NO_TYPE);
}

bool	Conversions::isChar( const std::string &literal)
{
	if (literal.length() == 1
		&& !std::isdigit(literal[0]))
		return (true);
	else
		return (false);
}
        
bool	Conversions::isInt( const std::string &literal)
{
	int	literal_length = literal.length();
	int i;

	if (literal[0] == '-')								// check for negative number
		i = 1;
	else
		i = 0;
	if (literal_length == i)							// if just - (isChar) or empty
		return (false);									// handle error
	for (; i < literal_length; i++)			
		if (!std::isdigit(literal[i]))					// check all char are digits
			return (false);
	return (true);
}
        
bool	Conversions::isFloat( const std::string &literal)
{
	size_t i = 0;

	if (literal == "-inff"
		|| literal == "+inff"
		|| literal == "nanf")
		return (true);

	if (literal[0] == '-') 								// check for the - sign
		i++;
	while (std::isdigit(literal[i]))					// go as long as it's a number
		i++;
	if (i + 1 == literal.length() && literal[i] == 'f') // checking for 'f' : 56f
		return (true);									
	if (i + 1 != literal.length() && literal[i] != '.') // handling errors
		return (false);	
	else 												// if literal[i] is '.'
		i++;
	while (std::isdigit(literal[i]))					// go as long as it's a number
		i++;											
	if (i + 1 != literal.length() 
		|| literal[i] != 'f') 							// handling errors
		return (false);	
	return (true);
}
        
bool	Conversions::isDouble( const std::string &literal)
{
    size_t i = 0;

	if (literal == "-inf"
		|| literal == "+inf"
		|| literal == "nan")
		return (true);

	if (literal[0] == '-') 								// check for the - sign
		i++;
	while (std::isdigit(literal[i]))					// go as long as it's a number
		i++;									
	if (literal[i] != '.') 								// handling errors
		return (false);									
	i++;												// if literal[i] is '.'
	while (std::isdigit(literal[i]))					// go as long as it's a number
		i++;											
	if (i != literal.length()) 							// handling errors
		return (false);	
	return (true);
}

Conversions::t_status	Conversions::setCharStatus( const char &c )
{
	if (std::isprint(c))
		return (CONVERTED);
	else
		return (NON_DISPLAYABLE);
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

/* 
	Super helpful link to understand the stringstream conversion system:
		https://www.softwaretestinghelp.com/stringstream-class-in-cpp/#:~:text=The%20stringstream%20class%20in%20C%2B%2B,like%20cin%20and%20cout%20streams. 

	Order that's good to have in mind to understand the checks to operate at conversion : 
		Char (smallest type)
		Int
		Float
		Double (biggest type)
	*/

void	Conversions::convertToChar( const std::string &literal )
{
	// Converting char
	std::stringstream stringstream(literal);
	stringstream >> converted.c;
	conversion_table[T_CHAR].status = setCharStatus(converted.c);

	// Explicitely converting the other types.
	converted.i = static_cast<int>(converted.c);
	conversion_table[T_INT].status = CONVERTED;
	converted.f = static_cast<float>(converted.c);
	conversion_table[T_FLOAT].status = CONVERTED;
	converted.d = static_cast<double>(converted.c);
	conversion_table[T_DOUBLE].status = CONVERTED;
}
        
void    Conversions::convertToInt( const std::string &literal)
{
	// Converting int
    std::stringstream stringstream(literal);
	stringstream >> converted.i;
	if (convertToString(converted.i) != literal)
		allImpossible(literal);
	else
	{
		conversion_table[T_INT].status = CONVERTED;

		// Explicitely converting the other types.
		converted.c = static_cast<char>(converted.i);
		conversion_table[T_CHAR].status = setCharStatus(converted.c);
		converted.f = static_cast<float>(converted.i);
		conversion_table[T_FLOAT].status = CONVERTED;
		converted.d = static_cast<double>(converted.i);
		conversion_table[T_DOUBLE].status = CONVERTED;
	}
}

float Conversions::setFloat ( const std::string &literal )
{
	std::stringstream stringstream(literal);

	double	temp;
	stringstream >> temp;
	float	f = static_cast<float>(temp);

	if (f > temp)
		return (1./0.);
	else if (f < temp)
		return (-1./0.);
	else
		return (f);
}

double Conversions::setDouble ( const std::string &literal )
{
	std::stringstream stringstream(literal);

	long double	temp;
	stringstream >> temp;
	double	d = static_cast<double>(temp);

	if (d > temp)
		return (1./0.);
	else if (d < temp)
		return (-1./0.);
	else
		return (d);
}
        
void	Conversions::convertToFloat( const std::string &literal)
{
	// Converting float
	if (literal == "+inff")
		converted.f = 1. / 0.;
	else if (literal == "-inff")
		converted.f = -1. / 0.;
	else if (literal == "nanf")
		converted.f = std::numeric_limits<float>::quiet_NaN();
	else
		converted.f = setFloat(literal); // checking the limits
	conversion_table[T_FLOAT].status = CONVERTED;

	// Explicitely converting the other types.
	converted.i = static_cast<int>(converted.f);
	if (converted.i != static_cast<long long>(converted.f))
	{
		conversion_table[T_INT].status = IMPOSSIBLE;
		conversion_table[T_CHAR].status = IMPOSSIBLE;
	}
	else
	{
		conversion_table[T_INT].status = CONVERTED;
		converted.c = static_cast<char>(converted.f);
		conversion_table[T_CHAR].status = setCharStatus(converted.c);
	}
	converted.d = static_cast<double>(converted.f);
	conversion_table[T_DOUBLE].status = CONVERTED;
}
        
void	Conversions::convertToDouble( const std::string &literal)
{
	// Converting double
	if (literal == "+inf")
		converted.d = 1. / 0.;
	else if (literal == "-inf")
		converted.d = -1. / 0.;
	else if (literal == "nan")
		converted.d = std::numeric_limits<double>::quiet_NaN();
	else
		converted.d = setDouble(literal); // checking the limits.
	conversion_table[T_DOUBLE].status = CONVERTED;

	// Explicitely converting the other types.
	converted.i = static_cast<int>(converted.d);
	if (converted.i != static_cast<long long>(converted.d))
	{
		conversion_table[T_INT].status = IMPOSSIBLE;
		conversion_table[T_CHAR].status = IMPOSSIBLE;
	}
	else
	{
		conversion_table[T_INT].status = CONVERTED;
		converted.c = static_cast<char>(converted.d);
		conversion_table[T_CHAR].status = setCharStatus(converted.c);
	}
	converted.f = static_cast<float>(converted.d);
	conversion_table[T_FLOAT].status = CONVERTED;

}

void	Conversions::allImpossible( const std::string &literal)
{
    (void)literal;
	for (size_t i = 0; i < NB_TYPE_CONVERSIONS; i++)
		conversion_table[i].status = IMPOSSIBLE;
}

/*
	## About displaying the decimals of floats and doubles

	According to http://en.cppreference.com/w/cpp/io/ios_base/precision, 
	the precision decides how many digits are printed, not how many digits 
	after the floating point are printed:
		std::ios_base::precision
	manages the precision (i.e. how many digits are generated) of floating 
	point output.

	Using std::fixed will change the interpretation of the floatfield 
	precision. According to http://www.cplusplus.com/reference/ios/ios_base/precision/:
		In both the fixed and scientific notations, the precision field specifies 
		exactly how many digits to display after the decimal point, even if this 
		includes trailing decimal zeros. The digits before the decimal point are 
		not relevant for the precision in this case. 
*/
void    Conversions::printConversions( void ) const
{
	std::cout << "char: ";
	if (!printError(conversion_table[T_CHAR].status))
		std::cout << converted.c << std::endl;
	std::cout << "int: ";
	if (!printError(conversion_table[T_INT].status))
		std::cout << converted.i << std::endl;
	std::cout << "float: ";
	if (!printError(conversion_table[T_FLOAT].status))
		std::cout << std::fixed << std::setprecision(2) 
					<< converted.f << "f" << std::endl;
	std::cout << "double: ";
	if (!printError(conversion_table[T_DOUBLE].status))
		std::cout << std::fixed << std::setprecision(2)
					<< converted.d << std::endl;
}

bool    Conversions::printError( int status ) const
{
	switch (status)
	{
		case IMPOSSIBLE:
			std::cout << "Impossible" << std::endl;
			return (true);
		case NON_DISPLAYABLE:
			std::cout << "Non displayable" << std::endl;
			return (true);
		default:
			return (false);
	}
}
