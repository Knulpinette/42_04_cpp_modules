#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class   Bureaucrat
{
    private:
		Bureaucrat();

        const std::string name;
        int               grade;


    public:
		Bureaucrat::Bureaucrat(const std::string newName, int newGrade);
        Bureaucrat(const Bureaucrat &valueToCopy);
        Bureaucrat& operator = (const Bureaucrat &valueToCopy);
        ~Bureaucrat();

		int 		getGrade();
		std::string getName();

		class GradeTooHighException : public exception {
			const char * what () const throw () {
				return "Grade is too high"; }
		};

		class GradeTooLowException : public exception {
			const char * what () const throw () {
				return "Grade is too low"; }
		};
};

/* 
	## Note on Nested Classes
	A nested class is a class that is declared in another class. The nested 
	class is also a member variable of the enclosing class and has the same 
	access rights as the other members. However, the member functions of the 
	enclosing class have no special access to the members of a nested class.

	## Note on Exceptions
		https://cplusplus.com/reference/exception/exception/ 

	Exceptions allow the code to read better and to have a different syntax to
	isolate error handling. 

	try − 	A try block identifies a block of code for which particular exceptions 
		  	will be activated. It's followed by one or more catch blocks.
	throw − A program throws an exception when a problem shows up. 
			This is done using a throw keyword.

	catch − A program catches an exception with an exception handler at the place 
			in a program where you want to handle the problem. The catch keyword 
			indicates the catching of an exception.

	/!\ if an exception is not caught, problems will arise. To handle that case,
		it might be good to devise your own default exception handling. 
		
	/*

#endif