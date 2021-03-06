#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact
{
	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickname;
		std::string	phoneNumber;
		std::string	darkestSecret;

		void	printCorrectLength(std::string contactField);

	public:
				Contact(void);
				~Contact(void);
		void	getInfos();
		void	printInColumns(int contactID);
		void	printDetailsList();
};

#endif