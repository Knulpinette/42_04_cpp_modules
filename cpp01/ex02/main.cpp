#include <iostream>

int main( void )
{
    const std::string brain = "HI THIS IS BRAIN";
	const std::string *brainPTR = &brain;
    const std::string &brainRef = *brainPTR;

    std::cout << std::endl << "brain" << std::endl
				<< "brain string content: " << brain << std::endl

				<< std::endl << "brainPTR" << std::endl
				<< "brain pointer content: " << *brainPTR << std::endl
                << "brain pointer adress: " << brainPTR << std::endl

				<< std::endl << "&brainRef" << std::endl
                << "brain reference content: " << brainRef << std::endl
				<< "brain reference adress: " << &brainRef << std::endl
				<< std::endl; 
}

/*
	https://www.educative.io/answers/differences-between-pointers-and-references-in-cpp 

	A pointer can be initialized to any value anytime after it is declared.
					int a = 5;
					int *p = &a;
	A pointer can be assigned to point to a NULL value.
	Pointers need to be dereferenced with a *.
	A pointer can be changed to point to any variable of the same type.

	A reference must be initialized when it is declared.
					int a = 5;
					int &ref = a;
	References cannot be NULL.
	References can be used ,simply, by name.
	Once a reference is initialized to a variable, it cannot be changed to refer to a variable object.
*/
