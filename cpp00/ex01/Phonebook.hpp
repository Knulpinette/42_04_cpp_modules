#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

#define MAX_NB_CONTACTS 8

class Phonebook
{
	private:
		int		nbContacts = 0;
		int		index = 0;
		Contact	contacts[MAX_NB_CONTACTS];

		void	printBook();

	public:
				Phonebook(void); // constructor
				~Phonebook(void); // deconstructor
		void	addContact();
		void	searchContact();
};

#endif