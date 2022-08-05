#ifndef CONVERSIONS_HPP
# define CONVERSIONS_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <limits>
#include <sstream>


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

class Conversions
{
    private:

        typedef enum e_status
        {
            NOT_CONVERTED,
            IMPOSSIBLE,
            NON_DISPLAYABLE,
            CONVERTED
        }           t_status;
		typedef	enum e_types
		{
			T_CHAR = 0,
			T_INT,
			T_FLOAT,
			T_DOUBLE,
			T_NO_TYPE
		}			t_types;

        typedef struct s_literal
        {
            char    c;
            int     i;
            float   f;
            double  d;       
        }				t_literal;

		// Variables
		t_literal	converted;

		// Methods to identify the converstion to execute
		static bool isChar(const std::string& literal);
		static bool isInt(const std::string& literal);
		static bool isFloat(const std::string& literal);
		static bool isDouble(const std::string& literal);
		std::string	convertToString(int i);

    public:
        Conversions(); // Should I keep it here or put it in private?
		Conversions( const std::string literal );
        Conversions( const Conversions &valueToCopy);
        Conversions& operator = ( const Conversions &valueToCopy);
        ~Conversions();

        // Conversion functions
		void	convertToChar( const std::string &literal);
		void	convertToInt( const std::string &literal);
		void	convertToFloat( const std::string &literal);
		void	convertToDouble( const std::string &literal);

        // Printing the result
        void    printConversions( void ) const;
}

#endif