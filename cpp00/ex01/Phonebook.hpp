#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>

#define MAX_CONTACT 8

class Phonebook
{

	public:
		Phonebook(void); // constructor
		~Phonebook(void); // deconstructor
		void	addContact();
		void	searchContact();

};

#endif