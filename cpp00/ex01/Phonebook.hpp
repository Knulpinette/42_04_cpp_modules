#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class Phonebook
{
	private:
		//int		nb_contacts;
		Contact	oldestContact;
		Contact contacts[8];

	public:
		Phonebook(void); // constructor
		~Phonebook(void); // deconstructor
		void	addContact();
		void	searchContact();
};

#endif