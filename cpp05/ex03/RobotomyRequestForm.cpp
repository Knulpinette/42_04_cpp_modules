#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
	: Form("RobotomyRequestForm", 72, 45),
		target("Default target")
{
	std::cout << "Default constructor called for Robotomy Request Form" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( const std::string& newTarget )
	: Form("RobotomyRequestForm", 72, 45),
		target(newTarget)
{
	std::cout << "Target constructor called for Robotomy Request Form" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm &valueToCopy ) 
	: Form("RobotomyRequestForm", 72, 45),
		target(valueToCopy.target)
{
	std::cout << "Copy constructor called for Robotomy Request Form" << std::endl;
}

RobotomyRequestForm & RobotomyRequestForm::operator = (const RobotomyRequestForm &valueToCopy ) 
{
	target = valueToCopy.target;
	std::cout << "Copy assignement constructor called for Robotomy Request Form" << std::endl;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() 
{
	std::cout << "Destructor called for Robotomy Request Form" << std::endl;
}

std::string		RobotomyRequestForm::getTarget()
{
	return (this->target);
}

/* 	## Note on randomness in c++
		https://www.geeksforgeeks.org/rand-and-srand-in-ccpp/ 
	
	# How srand() and rand() are related to each other?
		srand() sets the seed which is used by rand to generate 
		“random” numbers. If you don’t call srand before your first 
		call to rand, it’s as if you had called srand(1) to set the 
		seed to one. 
*/

void	RobotomyRequestForm::executeSpecificForm() const
{
	std::cout << "BbbrZZzzzbBrzzzBBBRRRRZZZZZZbrrrzzZZZZZZ" << std::endl;

	srand(time(0));
	const bool fiftyPourcentSuccess = (bool)(rand() % 2);

	if (!fiftyPourcentSuccess)
		std::cout << target << " has been robotomized!" << std::endl;
	else
		throw RobotomyRequestForm::RobotomyFailureException();
}

const char* RobotomyRequestForm::RobotomyFailureException::what () const throw ()
{
	return "Robotomization has failed.";
}