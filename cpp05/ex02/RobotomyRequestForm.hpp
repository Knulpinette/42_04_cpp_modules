#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <iostream>
#include <cstdlib> // srand() + rand()

class RobotomyRequestForm: public Form
{
    private:
        std::string target;

    public:
        RobotomyRequestForm();
        RobotomyRequestForm( const std::string& target );
        RobotomyRequestForm( const RobotomyRequestForm &valueToCopy );
        ~RobotomyRequestForm();
        RobotomyRequestForm & operator = (const RobotomyRequestForm &valueToCopy );

        std::string getTarget();

        void	    executeSpecificForm() const;

        class RobotomyFailureException : public std::exception { 
            const char * what () const throw ();
        };
};

#endif