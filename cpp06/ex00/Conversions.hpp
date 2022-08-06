#ifndef CONVERSIONS_HPP
# define CONVERSIONS_HPP

#include <iostream>
#include <iomanip>	// std::precision, std::fixed
#include <string>
#include <cstdlib> 
#include <limits>	// nan(f), +inf(f), -inf(f) 
#include <climits> // INT_MAX, INT_MIN
#include <sstream>	// std::stringstream


/*
    "This is a string literal.";

    A string literal is a bit of text between double quotes, 
    as shown above. This quote has a type of const char *, which 
    means several things.

        (a) You cannot change it, but can access its value (const).
        (b) A C++ compiler handles it much like it would a character array (char *).

        c++11
        https://en.cppreference.com/w/cpp/language/user_literal
*/

# define NB_TYPE_CONVERSIONS 4

class Conversions
{
    private:

		// Error cases enumeration (to keep track of what should be printed)
        typedef enum e_status
        {
            NOT_CONVERTED = 0,
            IMPOSSIBLE,
            NON_DISPLAYABLE,
            CONVERTED
        }           t_status;

		// Structs for conversion table (to know which function to use to convert)
		typedef	enum e_types
		{
			T_CHAR = 0,
			T_INT,
			T_FLOAT,
			T_DOUBLE,
			T_NO_TYPE
		}			t_types;

        typedef struct s_conversion_table
        {
            t_status status;
            void (Conversions::*conversionFunction)(const std::string&);
        }				t_conversion_table;

		// Struct with the different required conversions
		 typedef struct s_conversion
        {
            char    c;
            int     i;
            float   f;
            double  d;       
        }				t_conversion;

		// Variables
		t_conversion_table	conversion_table[NB_TYPE_CONVERSIONS];
		t_conversion		converted;


		// Methods to identify the converstion to execute
		t_types		getType( const std::string& literal );
		bool		isChar( const std::string& literal );
		bool 		isInt( const std::string& literal );
		bool 		isFloat( const std::string& literal );
		bool		isDouble( const std::string& literal );

		// Limits checks for conversions
		t_status	setCharStatus ( const char &c ); // to check if it's displayable
		float		setFloat ( const std::string &literal );
		double		setDouble ( const std::string &literal );
		std::string	convertToString( int i ); 		// to check int_MAX and int_MIN limit

		// Conversion functions
		void		convertToChar( const std::string &literal);
		void		convertToInt( const std::string &literal);
		void		convertToFloat( const std::string &literal);
		void		convertToDouble( const std::string &literal);
		void		allImpossible ( const std::string & literal);

		// Printing errors
		bool		printError( int status ) const;

		Conversions(); // no need for that constructor.

    public:
		Conversions( const std::string literal );
        Conversions( const Conversions &valueToCopy );
        Conversions& operator = ( const Conversions &valueToCopy );
        ~Conversions();

        // Printing the result
        void    printConversions() const;
};

#endif