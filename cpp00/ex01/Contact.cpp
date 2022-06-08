#include "Contact.hpp"

Contact::Contact(void)
{
	//std::cout << "[Constructing Contact]" << std::endl;
}

Contact::~Contact(void)
{
	//std::cout << "[Deconstructing Contact]" << std::endl;
}

/* 
	std::getline works as follows : 
	Parameters
		input	-	the stream to get data from
		str	-	the string to put the data into
			optional (delim	-	the delimiter character)
			if not precised, naturally set to eofbit
	Return value
		input
	Notes
		std::cin >> std::ws allows you to save standard input without whitespace
*/

void	Contact::getInfos(void)
{
	std::cout << "	Enter First Name : ";
	std::getline(std::cin >> std::ws, firstName);
	std::cout << "	Enter Last Name : ";
	std::getline(std::cin >> std::ws, lastName);
	std::cout << "	Enter Nickname : ";
	std::getline(std::cin >> std::ws, nickname);
	std::cout << "	Enter Phone Number : ";
	std::getline(std::cin >> std::ws, phoneNumber);
	std::cout << "	Enter Darkest Secret : ";
	std::getline(std::cin >> std::ws, darkestSecret);
	std::cout << "You added " << firstName << " " << lastName << std::endl;
}

void	Contact::printDetailsList(void)
{
	std::cout << "First Name : "
				<< firstName << std::endl;
	std::cout << "Last Name : "
				<< lastName << std::endl;
	std::cout << "Nickname : "
				<< nickname << std::endl;
	std::cout << "Phone Number : "
				<< phoneNumber << std::endl;
	std::cout << "Darkest Secret : "
				<< darkestSecret << std::endl;
}

