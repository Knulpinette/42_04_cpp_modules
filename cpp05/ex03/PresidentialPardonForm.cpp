#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
	: Form("PresidentialPardonForm", 25, 5),
		target("Default target")
{
	std::cout << "Default constructor called for Presidential Pardon Form" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( const std::string& newTarget )
	: Form("PresidentialPardonForm", 25, 5),
		target(newTarget)
{
	std::cout << "Target constructor called for Presidential Pardon Form" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm &valueToCopy ) 
	: Form("PresidentialPardonForm", 25, 5),
		target(valueToCopy.target)
{
	std::cout << "Copy constructor called for Presidential Pardon Form" << std::endl;
}

PresidentialPardonForm & PresidentialPardonForm::operator = (const PresidentialPardonForm &valueToCopy ) 
{
	target = valueToCopy.target;
	std::cout << "Copy assignement constructor called for Presidential Pardon Form" << std::endl;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() 
{
	std::cout << "Destructor called for Presidential Pardon Form" << std::endl;
}

std::string		PresidentialPardonForm::getTarget()
{
	return (this->target);
}

void	PresidentialPardonForm::executeSpecificForm() const
{
	if (target.length())
		std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	else
		throw PresidentialPardonForm::PresidentialPardonException();
}

const char* PresidentialPardonForm::PresidentialPardonException::what () const throw ()
{
	return "Pardon has not been given.";
}