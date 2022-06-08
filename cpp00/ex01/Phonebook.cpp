#include "Phonebook.hpp"

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
	if (std::cin.fail() || contactID <= 0 || contactID >= nbContacts + 1)
	{
		if (std::cin.fail())
			std::cin.clear();
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