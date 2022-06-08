#include "Phonebook.hpp"

Phonebook::Phonebook(void)
{
	//std::cout << "[Constructing Phonebook]" << std::endl;
}

Phonebook::~Phonebook(void)
{
	//std::cout << "[Deconstructing Phonebook]" << std::endl;
}

/*q
	if ADD : first name, last name, nickname, phone number, darkest secret
		Phone Book must be an instance of a class and must contain an array of contacts
		Contacts must be an instance of my class in the code.
	if SEARCH : if contact is empty, don't show
			index, first name, last name, nickname (four column)
			each column must be 10 char wide, right aligned, and separated by a pipe char.
			any input that's longer must be truncated and the last displayable char is replaced by "." 
*/

void	Phonebook::addContact(void)
{
	std::cout << "adding... contact" << std::endl;
	std::cout << std::endl;
}

void	Phonebook::searchContact(void)
{
	std::cout << "searching... contact" << std::endl;
	std::cout << std::endl;
}