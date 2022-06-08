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
#include "colors.hpp"

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
		if(!input_is_valid(input))
		{
			std::cout << "You want to (ADD / SEARCH / EXIT): ";
			std::cin >> input;
		}
		if (input == "EXIT")
		{
			std::cout << "🚪🤙 Don't come back next time! 💩 " << std::endl;
			exit(EXIT_SUCCESS);
		}
		else if (input == "ADD")
			Phonebook.addContact();
		else if (input == "SEARCH")
			Phonebook.searchContact();
		input = "";
	}
	std::cout << std::endl;
	return (0);
}