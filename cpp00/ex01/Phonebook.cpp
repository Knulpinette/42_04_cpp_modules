#include "Phonebook.hpp"
#include <limits>

Phonebook::Phonebook(void){}
Phonebook::~Phonebook(void){}

void	Phonebook::addContact(void)
{
	Contact newContact;

	newContact.getInfos();
	if (index == MAX_NB_CONTACTS)
		index = 0;
	contacts[index] = newContact;
	if (nbContacts < MAX_NB_CONTACTS)
		nbContacts++;
	index++;
}

/*
	std::cin.fail() checks if the standard input is a number.
	std::cin.clear() clears the input.
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			// This line ignores the rest of the current line, up to '\n' 
			or EOF - whichever comes first:
				- '\n' sets the delimiter, i.e. the character after which
					cin stops ignoring
   				- numeric_limits<streamsize>::max() sets the maximum number 
					of characters to ignore. Since this is the upper limit 
					on the size of a stream, you are effectively telling cin 
					that there is no limit to the number of characters to ignore.


*/

void	Phonebook::searchContact(void)
{
	if (nbContacts == 0)
	{
		std::cout << std::endl
					<< "	🤷 You gotta write something in me first."
					<< std::endl
					<< std::endl;
		return;
	}
	printBook();
	std::cout << "Enter the contact ID you want to show : ";
	long	contactID;
	std::cin >> contactID;
	std::cout << "Contact ID : " << contactID << std::endl;
	if (std::cin.fail() || contactID <= 0 || contactID >= nbContacts + 1)
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << std::endl
					<< "	🤷 This ID does not exist!"
					<< std::endl
					<< std::endl;
	}
	else
		contacts[contactID - 1].printDetailsList();
}

void	Phonebook::printBook(void)
{
	int	i;

	std::cout << std::endl
				<< std::right << std::setw(10) << "INDEX" << "|"
				<< std::right << std::setw(10) << "FIRST NAME" << "|"
				<< std::right << std::setw(10) << "LAST NAME" << "|"
				<< std::right << std::setw(10) << "NICKNAME" << "|"
				<< std::endl;
	for (i = 0; i < nbContacts; i++)
		contacts[i].printInColumns(i + 1);
	std::cout << std::endl;
}