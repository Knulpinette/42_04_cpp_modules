/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osurcouf <.@student.42lisboa.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 18:22:44 by osurcouf          #+#    #+#             */
/*   Updated: 2021/06/30 17:15:30 by osurcouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

/* 🦕
	MY_AWESOME_PHONEBOOK

	Can't store more than 8 contacts (if 9, you have to replace the oldest contact)
	INPUT COMMAND : EXIT, ADD, SEARCH
	if EXIT : quit and be wiped clean
	if ADD : first name, last name, nickname, phone number, darkest secret
		Phone Book must be an instance of a class and must contain an array of contacts
		Contacts must be an instance of my class in the code.
	if SEARCH : if contact is empty, don't show
		index, first name, last name, nickname (four column)
		each column must be 10 char wide, right aligned, and separated by a pipe char.
		any input that's longer must be truncated and the last displayable char is replaced by "."
		User can then type the desired contactID to show all details of the contact.
	else
		Input is ignored / discarded and we loop forever
	🦕 */

void	display_instructions(void)
{
	std::cout << std::endl
				<< "	☎️ Welcome to this awesome crappy phonebook! 📖" << std::endl
				<< std::endl
				<< "	⌛ It will take you on a trip back to the 80s.💾" << std::endl
				<< "	The phonebook holds 8 contacts that you can: " << std::endl
				<<		"	➕  ADD" << std::endl
				<<		"	🔎  SEARCH" << std::endl
				<<		"	🚪  EXIT" << std::endl
				<< "	That's it. Yup. Have fun. ❤️" << std::endl << std::endl;
}

int main(void) 
{
	std::string	input;
	Phonebook 	Phonebook;

	display_instructions();
	while (true)
	{
		std::cout << "You want to: ";
		std::cin >> input;
		if (input == "EXIT")
		{
			std::cout << std::endl
						<< "🚪🤙 Don't come back next time! 💩 " 
						<< std::endl
						<< std::endl;
			exit(EXIT_SUCCESS);
		}
		else if (input == "ADD")
			Phonebook.addContact();
		else if (input == "SEARCH")
			Phonebook.searchContact();
		else
			std::cout << "You can only ADD, SEARCH or EXIT." << std::endl;
		input.clear(); /* erases the contents of the string */
		//std::cin.clear();
	}
	std::cout << std::endl;
	return (0);
}