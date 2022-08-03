#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;
// you have to declare the class like this to let the code compile 
// (else it can't find the class)

class   Form
{
    private:
		std::string const name;
        bool              signature;
        int         const requiredGrade;
        int         const executeGrade;


    public:
		// Canonical form
		Form();
		Form(const std::string newName);
		Form(const std::string newName, const int graderequired, const int gradetoexecute);
		Form(const std::string newName, bool isSigned, const int graderequired, const int gradetoexecute);
        Form(const Form &valueToCopy);
        Form& operator = (const Form &valueToCopy);
        virtual ~Form();

		// Getters
		std::string 	getName() const;
        bool        	getSignature() const;
		int				getRequiredGrade() const;
        int				getExecuteGrade() const;

        // Methods
        void			beSigned(const Bureaucrat& bureaucrat);
		void			execute(Bureaucrat const & executor) const;
		virtual void	executeSpecificForm() const = 0;

		// Nested classes to handle exceptions
		class GradeTooHighException : public std::exception { 
			const char * what () const throw ();
		};

		class GradeTooLowException : public std::exception { 
			const char * what () const throw ();
		};

		class AlreadySignedException : public std::exception { 
			const char * what () const throw ();
		};

		class FailureToExecuteException : public std::exception { 
			const char * what () const throw ();
		};
};

std::ostream & operator << (std::ostream &out, const Form &form); // overloading function

#endif

/* 
	## Notes on Nested Classes
	A nested class is a class that is declared in another class. The nested 
	class is also a member variable of the enclosing class and has the same 
	access rights as the other members. However, the member functions of the 
	enclosing class have no special access to the members of a nested class.

	## Notes on Exceptions
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

	## Notes on const keyword

	- The const variable cannot be left un-initialized at the time of the assignment.
    - It cannot be assigned value anywhere in the program.
    - Explicit value needed to be provided to the constant variable at the time of 
	  declaration of the constant variable.

	1. const int variable;
	2. int const variable;
	3. void method() const;
	4. const void method();
		
	*/