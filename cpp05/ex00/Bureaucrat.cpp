#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
	: name("Unknown")
{
    std::cout << "Default constructor called for Bureaucrat" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string newName, int newGrade)
			: name(newName)
{
	EXCEPTION IF < 1 or > 150
	throwexception
	ELSE
	grade(newGrade)
    std::cout << "Initialisation constructor called for Bureaucrat" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &valueToCopy)
{

}

Bureaucrat& Bureaucrat::operator = (const Bureaucrat &valueToCopy)
{
    return (*this);
}

~Bureaucrat::Bureaucrat()
{
    std::cout << "Destructor called for Bureaucrat" << std::endl;
}

