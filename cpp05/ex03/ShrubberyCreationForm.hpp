#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <iostream>
#include <fstream> 

class ShrubberyCreationForm: public Form
{
    private:
        std::string target;

    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm( const std::string& target );
        ShrubberyCreationForm( const ShrubberyCreationForm &valueToCopy );
        ~ShrubberyCreationForm();
        ShrubberyCreationForm & operator = (const ShrubberyCreationForm &valueToCopy );

        std::string getTarget();

        void	    executeSpecificForm() const;

        class ShrubberyFailureException : public std::exception { 
            const char * what () const throw ();
        };

};

#endif