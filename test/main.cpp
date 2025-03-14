/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlaggoun <vlaggoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 13:42:31 by vlaggoun          #+#    #+#             */
/*   Updated: 2025/03/14 09:13:41 by vlaggoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hello.class.hpp"
#include "iostream"
#include "iomanip"

int	main()
{
	Hello instance;

	instance.setvar(42);
	std::cout << "getvar = " << instance.getvar() << std::endl;
	instance.setvar(-42);
	std::cout << "getvar = " << instance.getvar() << std::endl;

	std::cout << std::setw(10);
	std::cout << "| index | ";
	// *inserer la donnee de l'attribut correspondant
	std::cout << std::setw(10);
	std::cout << "first name | ";
	std::cout << std::setw(10);
	std::cout << "last name | ";
	std::cout << std::setw(10);
	std::cout << "nickname |";


	return (0);
}

