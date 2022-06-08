#include "Phonebook.hpp"

Phonebook::Phonebook(void)
{
	//std::cout << "[Constructing Phonebook]" << std::endl;
}

Phonebook::~Phonebook(void)
{
	//std::cout << "[Deconstructing Phonebook]" << std::endl;
}

/*
	if SEARCH : if contact is empty, don't show
			index, first name, last name, nickname (four column)
			each column must be 10 char wide, right aligned, and separated by a pipe char.
			any input that's longer must be truncated and the last displayable char is replaced by "." 
*/

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
*/

void	Phonebook::searchContact(void)
{
	//int		i;

	if (nbContacts == 0)
	{
		std::cout << "	🤷 You gotta write something in me first."
					<< std::endl;
		return;
	}
	/*for (i = 0; i < nbContacts; i++)
		contacts[i].printDetailsList();*/
	std::cout << "Enter the contact ID you want to show : ";
	long	contactID;
	std::cin >> contactID;
	if (std::cin.fail() || contactID <= 0 || contactID >= nbContacts + 1)
	{
		if (std::cin.fail())
			std::cin.clear();
		std::cout << "	🤷 This ID does not exist!" << std::endl;
	}
	else
		contacts[contactID - 1].printDetailsList();
}