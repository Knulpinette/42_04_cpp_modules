#include "Contact.hpp"

Contact::Contact(void){}
Contact::~Contact(void){}

/* 
	std::getline works as follows : 
	Parameters
		input	-	the stream to get data from
		str		- 	the string to put the data into
		delim	-	the delimiter character (optionnal)
			if not added, delim is naturally set to eofbit 
	Return value
		input
	Notes
		std::cin >> std::ws allows you to save standard input without whitespace
*/

void	Contact::getInfos(void)
{
	std::cout << std::endl
				<< "	Enter First Name : ";
	std::getline(std::cin >> std::ws, firstName);
	std::cout << "	Enter Last Name : ";
	std::getline(std::cin >> std::ws, lastName);
	std::cout << "	Enter Nickname : ";
	std::getline(std::cin >> std::ws, nickname);
	std::cout << "	Enter Phone Number : ";
	std::getline(std::cin >> std::ws, phoneNumber);
	std::cout << "	Enter Darkest Secret : ";
	std::getline(std::cin >> std::ws, darkestSecret);
	std::cout << std::endl
				<< "	You added " << firstName << " " << lastName
				<< std::endl
				<< std::endl;
}

void	Contact::printInColumns(int contactID)
{
	std::cout << std::right << std::setw(10) << contactID << "|";
	printCorrectLength(firstName);
	printCorrectLength(lastName);
	printCorrectLength(nickname);
	std::cout << std::endl;
}
/*
	SUBSTR
	std::string.substr returns a substring
 		str.substr(3,5) >> gets you the bit of string in between those two pointers.
		position = str.find("live") >> finds the position of "live" in given string
  		str.substr(position) >> gets you the string from position
		  						(beginning of "live") to the end.
  */

void	Contact::printCorrectLength(std::string contactField)
{
	if (contactField.length() > 9)
		std::cout << std::right << std::setw(9) << contactField.substr(0,9) << ".|";
	else
		std::cout << std::right << std::setw(10) << contactField << "|";
}

void	Contact::printDetailsList(void)
{
	std::cout << std::endl
				<< "	First Name : " << firstName 
				<< std::endl
				<< "	Last Name : " << lastName 
				<< std::endl
				<< "	Nickname : " << nickname 
				<< std::endl
				<< "	Phone Number : " << phoneNumber
				<< std::endl
				<< "	Darkest Secret : " << darkestSecret
				<< std::endl
				<< std::endl;
}

