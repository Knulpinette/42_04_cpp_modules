#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern( const Intern &valueToCopy ) 
{
	(void)valueToCopy;
}

Intern & Intern::operator = (const Intern &valueToCopy ) 
{
	(void)valueToCopy;
	return (*this);
}

Intern::~Intern() {}

Form*  Intern::makeForm(const std::string formName, const std::string target)
{
	std::string	formsAvailable[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	Form* (Intern::*formGenerated[3])(const std::string&)
		= {
			&Intern::generateShrubberyCreation,
			&Intern::generateRobotomyRequest,
			&Intern::generatePresidentialPardon,
		};

	int	index;
	for (index = 0; index < 3; index++)
	{
		if (formName.compare(formsAvailable[index]) == 0)
			break;
	}
	switch (index)
	{
		case 0:
			return (this->*formGenerated[index])(target);
		case 1:
			return (this->*formGenerated[index])(target);
		case 2:
			return (this->*formGenerated[index])(target);
		default:
			throw Intern::FormNameDoesNotExist();
	}
	
}

Form* 	Intern::generateShrubberyCreation(const std::string &target)
{
	return new ShrubberyCreationForm(target);
}

Form* 	Intern::generateRobotomyRequest(const std::string &target)
{
	return new RobotomyRequestForm(target);
}

Form* 	Intern::generatePresidentialPardon(const std::string &target)
{
	return new PresidentialPardonForm(target);
}

const char* Intern::FormNameDoesNotExist::what () const throw ()
{
	return "Form name does NOT exist.";
}