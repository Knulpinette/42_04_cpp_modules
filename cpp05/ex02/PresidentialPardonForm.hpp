#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"
#include <iostream>

class PresidentialPardonForm: public Form
{
    private:
        std::string target;

    public:
        PresidentialPardonForm();
        PresidentialPardonForm( const std::string& target );
        PresidentialPardonForm( const PresidentialPardonForm &valueToCopy );
        ~PresidentialPardonForm();
        PresidentialPardonForm & operator = (const PresidentialPardonForm &valueToCopy );

        std::string getTarget();

        void	    executeSpecificForm() const;

        class PresidentialPardonException : public std::exception { 
            const char * what () const throw ();
        };

};

#endif