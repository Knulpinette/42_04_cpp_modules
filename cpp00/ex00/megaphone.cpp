/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osurcouf <.@student.42lisboa.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 18:22:44 by osurcouf          #+#    #+#             */
/*   Updated: 2021/06/30 17:15:30 by osurcouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv) {
	std::string buffer;	

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int i = 1; i < argc; i++) 
			buffer += argv[i];
		for (int i = 0; buffer[i]; i++)
			buffer[i] = std::toupper(buffer[i]);
	}
	std::cout << buffer << std::endl;
	return (0);
}
