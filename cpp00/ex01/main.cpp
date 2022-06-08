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
	}
	std::cout << std::endl;
	return (0);
}