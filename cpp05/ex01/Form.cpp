#include "Form.hpp"

Form::Form()
	: name("Random"),
        signature(false),
		requiredGrade(1),
        executeGrade(75)

{
    std::cout << "Default constructor called for Form" << std::endl;
}

Form::Form(const std::string newName)
			: name(newName),
                signature(false),
		        requiredGrade(1),
                executeGrade(75)
{
    std::cout << "Initialisation constructor called for Form" << std::endl;
}

Form::Form(const std::string newName, bool isSigned, const int graderequired, const int gradetoexecute)
			: name(newName),
                signature(isSigned)
{
	if (graderequired < 1 || gradetoexecute < 1)
		throw Form::GradeTooHighException();
	else if (graderequired > 150 || gradetoexecute > 150)
		throw Form::GradeTooLowException();
	else
    {
        requiredGrade = graderequired;
		executeGrade = gradetoexecute;
    }
    std::cout << "Initialisation constructor called for Form" << std::endl;
}

Form::Form(const Form &valueToCopy)
		: name(valueToCopy.name),
                signature(valueToCopy.signature),
		        requiredGrade(valueToCopy.requiredGrade),
                executeGrade(valueToCopy.executeGrade)

{
    return ;
}

Form& Form::operator = (const Form &valueToCopy)
{
	signature = valueToCopy.signature;
    return (*this);
}

Form::~Form()
{
    std::cout << "Destructor called for Form" << std::endl;
}

std::string Form::getName() const 
{
	return (this->name);
}

bool Form::getSignature() const
{
	return (this->signature);
}

int Form::getRequiredGrade() const
{
	return (this->requiredGrade);
}

int Form::getExecuteGrade() const
{
	return (this->executeGrade);
}

void Form::beSigned(const Bureaucrat& bureaucrat)
{
	if (this->signature)
        throw Form::AlreadySignedException();
    else if (bureaucrat.getGrade() <= requiredGrade)
        this->signature = true;
    else
        throw Form::GradeTooLowException();
}


const char * Form::GradeTooHighException::what () const throw ()
{
	return "Form grade is too high."; 
}

const char * Form::GradeTooLowException::what () const throw ()
{
	return "Form grade is too low."; 
}

const char * Form::AlreadySignedException::what () const throw ()
{
	return "Form was already signed."; 
}

std::ostream & operator << (std::ostream &out, const Form &Form)
{
	out << "Form " << Form.getName()
			<< " is ";
    if (Form.getSignature() == true)
        out << "signed." << std::endl;
    else
        out << "not signed." << std::endl;
    out << "Grade required to sign: " << Form.getRequiredGrade()
        << std::endl;
        << "Grade to execute form: " << Form.getExecuteGrade();
	return (out);
}
