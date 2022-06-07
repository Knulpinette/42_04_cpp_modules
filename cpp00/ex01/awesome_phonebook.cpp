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

#include "Contact.hpp"

int		input_is_valid(std::string input)
{
	if (input == "ADD")
		return (1);
	else if (input == "SEARCH")
		return (1);
	else if (input == "EXIT")
		return (1);
	return (0);
}

int main(void) 
{

	/* 
	Can't store more than 8 contacts (if 9 => replace the oldest contact)
	INPUT COMMAND : EXIT, ADD, SEARCH
	if EXIT : quit and loose contacts
	if ADD : first name, last name, nickname, phone number, darkest secret
		Phone Book must be an instance of a class and must contain an array of contacts
		Contacts must be an instance of my class in the code.
	if SEARCH : if contact is empty, don't show
			index, first name, last name, nickname (four column)
			each column must be 10 char wide, right aligned, and separated by a pipe char.
			any input that's longer must be truncated and the last displayable char is replaced by "."
	then waits for next command (until EXIT)
	else
		Input is ignored / discarded
	*/
	std::string	input;
	Phonebook Phonebook;

	std::cout << std::endl
				<< "	☎️ Welcome to this awesome crappy phonebook! 📖" << std::endl
				<< std::endl
				<< "	⌛ It will take you on a trip back to the 80s.💾" << std::endl
				<< "	The phonebook holds 8 contacts that you can: " << std::endl
				<<		"	➕  ADD" << std::endl
				<<		"	🔎  SEARCH" << std::endl
				<<		"	🚪  EXIT" << std::endl
				<< "	That's it. Yup. Have fun. ❤️" << std::endl << std::endl;
	while (1)
	{
		while(!input_is_valid(input))
		{
			std::cout << "You want to (ADD / SEARCH / EXIT): ";
			std::cin >> input;
		}
		if (input == "EXIT")
		{
			std::cout << "🚪🤙 Come back next time!" << std::endl;
			break ;
		}
		/*else if (input == "ADD")
			Phonebook.addContact();
		else if (input == "SEARCH")
			Phonebook.searchContact();*/
	}	
	std::cout << std::endl;
	return (0);
}