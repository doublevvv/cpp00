/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlaggoun <vlaggoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 12:20:31 by vlaggoun          #+#    #+#             */
/*   Updated: 2025/03/17 15:05:57 by vlaggoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"
#include <iostream>

// ! ne pas oublier de gerer le ctrl-D ! cin.oef() = break

int	main(int ac, char **av)
{
	PhoneBook	instance;
	std::string	command;

	if (ac > 2)
		std::cout << "no need for argument" << std::endl;
	while (1)
	{
		std::getline(std::cin, command);
		std::cout << "here" << std::endl;
		if (command.compare("EXIT") == 0)
		{
			return (0);
		}
		else if (command.compare("ADD") == 0)
		{
			instance.add_contact(command);
		}
		else if (command.compare("SEARCH") == 0)
		{
			std::cout << "hello" << std::endl;
			instance.display();
		}
		else
			std::cout << "wrong input" << std::endl;
	}
	std::cout << "OUT" << std::endl;
	return (0);
}
