/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlaggoun <vlaggoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 12:20:31 by vlaggoun          #+#    #+#             */
/*   Updated: 2025/03/14 16:31:55 by vlaggoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"
#include <iostream>

// ! ne pas oublier de gerer le ctrl-D ! cin.oef() = break

int	main(int ac, char **av)
{
	PhoneBook	instance;
	Contact		instance2; // ? possible de rcuperer via la class PhoneBook ?
	std::string	command;

	if (ac > 2)
		std::cout << "no need for argument" << std::endl;
	while (1)
	{
		std::getline(std::cin, command);
		if (command.compare("EXIT"))
			return (0);
		if (command.compare("ADD"))
		{

		}
		else
			std::cout << "wrong input" << std::endl;

	}
}
