/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlaggoun <vlaggoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 12:20:31 by vlaggoun          #+#    #+#             */
/*   Updated: 2025/03/18 16:05:49 by vlaggoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"
#include <iostream>
#include <limits>

// ! ne pas oublier de gerer le ctrl-D ! cin.oef() = break

int	main(int ac, char **av)
{
	PhoneBook	instance;
	std::string	command;

	if (ac > 2)
		std::cout << "no need for argument" << std::endl;
	while (std::cin.eof() == 0)
	{
		std::getline(std::cin, command);
		if (command.compare("EXIT") == 0)
			return (0);
		else if (command.compare("ADD") == 0)
		{
			instance.add_contact(command);
			if (std::cin.eof())
				return (0);
		}
		else if (command.compare("SEARCH") == 0)
		{
			instance.display();
			instance.search();
			if (std::cin.eof())
				return (0);
		}
		else
			std::cout << "wrong input" << std::endl;
	}
	return (0);
}
