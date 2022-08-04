#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
	: name("Unknown"),
		grade(150)
{
    //std::cout << "Default constructor called for Bureaucrat" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string newName)
			: name(newName), 
				grade(150)
{
    //std::cout << "Initialisation constructor called for Bureaucrat" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string newName, int newGrade)
			: name(newName)
{
	if (newGrade < 1)
		throw Bureaucrat::GradeTooLowException();
	else if (newGrade > 150)
		throw Bureaucrat::GradeTooHighException();
	else
		grade = newGrade;
    //std::cout << "Initialisation constructor called for Bureaucrat" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &valueToCopy)
		: name(valueToCopy.name)
{
	grade = valueToCopy.grade;
}

/* 
	## Note on const variable in operator =

	Since name is constant, if you do 

		b1.name = Michele, b1.grade = 10
		b2.name = Ophelie, b2.grade = 40
	
	>> b1 = b2 will have the following result

		b1.name = Michele, b1.grade = 40

	The name CANNOT be changed.
*/

Bureaucrat& Bureaucrat::operator = (const Bureaucrat &valueToCopy)
{
	grade = valueToCopy.grade;
    return (*this);
}

Bureaucrat::~Bureaucrat()
{
    //std::cout << "Destructor called for Bureaucrat" << std::endl;
}

std::string Bureaucrat::getName() const 
{
	return (this->name);
}

int Bureaucrat::getGrade() const
{
	return (this->grade);
}

void	Bureaucrat::incrementGrade()
{
	if (grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	else
		grade--;
}

void	Bureaucrat::decrementGrade()
{
	if (grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	else
		grade++;
}

void	Bureaucrat::signForm(Form &form) const
{
	try {
			form.beSigned(*this);
			std::cout << name << " signed " << form.getName() << std::endl;
	}
	catch (std::exception& e) {
		std::cerr << name << " couldn't sign " << form.getName()
				<< ". " << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(Form const & form)
{
	try {
			form.execute(*this);
			std::cout << name << " executed " << form.getName() << std::endl;
	}
	catch (std::exception& e) {
		std::cerr << name << " couldn't sign " << form.getName()
				<< ". " << e.what() << std::endl;
	}
}

const char * Bureaucrat::GradeTooHighException::what () const throw ()
{
	return "Bureaucrat grade is too high"; 
}

const char * Bureaucrat::GradeTooLowException::what () const throw ()
{
	return "Bureaucrat grade is too low"; 
}

std::ostream & operator << (std::ostream &out, const Bureaucrat &bureaucrat)
{
	out << bureaucrat.getName()
			<< ", grade: " << bureaucrat.getGrade();
	return (out);
}
