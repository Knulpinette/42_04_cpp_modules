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
