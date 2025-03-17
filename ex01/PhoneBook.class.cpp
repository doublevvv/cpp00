/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlaggoun <vlaggoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 15:53:58 by vlaggoun          #+#    #+#             */
/*   Updated: 2025/03/17 18:00:16 by vlaggoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void) :index(0)
{

}

PhoneBook::~PhoneBook(void)
{

}

void	PhoneBook::add_contact(std::string response)
{
	int	i = 0;

	while (1)
	{
		std::cout << "Please enter your firstname" << std::endl;
		std::getline(std::cin, response);
		std::cout << "here :" << response << std::endl;
		this->contact[i].set_firstname(response);
		break ;
	}
	while (1)
	{
		std::cout << "Please enter your lastname" << std::endl;
		std::getline(std::cin, response);
		std::cout << "here :" << response << std::endl;
		this->contact[i].set_lastname(response);
		break ;
	}
	while (1)
	{
		std::cout << "Please enter your nickname" << std::endl;
		std::getline(std::cin, response);
		std::cout << "here :" << response << std::endl;
		this->contact[i].set_nickname(response);
		break ;
	}
	while (1)
	{
		std::cout << "Please enter your phone number" << std::endl;
		std::getline(std::cin, response);
		std::cout << "here :" << response << std::endl;
		this->contact[i].set_phonenumber(response);
		break ;
	}
	while (1)
	{
		std::cout << "Please enter your darkest secret" << std::endl;
		std::getline(std::cin, response);
		std::cout << "here :" << response << std::endl;
		this->contact[i].set_darkestsecret(response);
		break ;
		// *sortie sur le main
	}
	index++;
	i++;
	std::cout << "index = " << index << std::endl;
	if (i == 8)
		i = 0;
	// modulo 8 pour reset index 
}

void	PhoneBook::display(void) //a appeler pour search
{

	std::cout << "|" << std::setw(10) << "index";
	// *inserer la donnee de l'attribut correspondant
	std::cout << "|" << std::setw(10) << "first name";
	std::cout << "|" << std::setw(10) << "last name";
	std::cout << "|" << std::setw(10) << "nickname|" << std::endl;

}

// void	PhoneBook::search(int nbr) //rechercher selon l'index
// {
// 	if (nbr < 0 || nbr > 8)
// 		std::cout << "wrong index" << std::endl;
// 	else
// 	{
// 		if (nbr = contact[index])
// 	}

// }
