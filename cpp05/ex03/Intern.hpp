#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
    public:
        Intern();
        Intern( const Intern &Intern );
        ~Intern();
        Intern & operator = (const Intern &Intern );

        Form *makeForm(const std::string formName, const std::string target);
        Form *generateShrubberyCreation(const std::string &target);
        Form *generateRobotomyRequest(const std::string &target);
        Form *generatePresidentialPardon(const std::string &target);

        class FormNameDoesNotExist : public std::exception { 
            const char * what () const throw ();
        };
};

#endif