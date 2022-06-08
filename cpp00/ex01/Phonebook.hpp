#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>

#define MAX_CONTACT 8
/* 
	Can't store more than 8 contacts (if 9 => replace the oldest contact
*/

class Phonebook
{
	public:
		Phonebook(void); // constructor
		~Phonebook(void); // deconstructor
		void	addContact();
		void	searchContact();
};

#endif