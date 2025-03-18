/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlaggoun <vlaggoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 15:53:58 by vlaggoun          #+#    #+#             */
/*   Updated: 2025/03/18 16:28:00 by vlaggoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include <limits>

PhoneBook::PhoneBook(void) :index(0)
{

}

PhoneBook::~PhoneBook(void)
{

}

void	PhoneBook::add_contact(std::string response)
{
	while (1)
	{
		std::cout << "Please enter your firstname" << std::endl;
		std::getline(std::cin, response);
		std::cout << "here :" << response << std::endl;
		this->_contact[index].set_firstname(response);
		break ;
	}
	while (1)
	{
		std::cout << "Please enter your lastname" << std::endl;
		std::getline(std::cin, response);
		std::cout << "here :" << response << std::endl;
		this->_contact[index].set_lastname(response);
		break ;
	}
	while (1)
	{
		std::cout << "Please enter your nickname" << std::endl;
		std::getline(std::cin, response);
		std::cout << "here :" << response << std::endl;
		this->_contact[index].set_nickname(response);
		break ;
	}
	while (1)
	{
		std::cout << "Please enter your phone number" << std::endl;
		std::getline(std::cin, response);
		std::cout << "here :" << response << std::endl;
		this->_contact[index].set_phonenumber(response);
		break ;
	}
	while (1)
	{
		std::cout << "Please enter your darkest secret" << std::endl;
		std::getline(std::cin, response);
		std::cout << "here :" << response << std::endl;
		this->_contact[index].set_darkestsecret(response);
		break ;
	}
	index++;
	std::cout << "index = " << index << std::endl;
	if (index == 8)
		index = 0;
	// modulo 8 pour reset index
}

void	PhoneBook::display(void) //a appeler pour search
{
	int i = 0;

	while (i < index && i < 8) //protger boucle
	{
		std::cout << "---------------------------------------------" << std::endl;
		std::cout << "|" << std::setw(10) << "index";
		std::cout << "|" << std::setw(10) << "first name";
		std::cout << "|" << std::setw(10) << "last name";
		std::cout << "|" << std::setw(10) << "nickname" << "|" << std::endl;
		std::cout << "|" << std::setw(10) << i;
		std::cout << "|" << std::setw(10) << get_point(_contact[i].get_firstname().substr(0, 10));
		std::cout << "|" << std::setw(10) << get_point(_contact[i].get_lastname().substr(0, 10));
		std::cout << "|" << std::setw(10) << get_point(_contact[i].get_nickname().substr(0, 10)) << "|" << std::endl;
		std::cout << "---------------------------------------------" << std::endl;
		i++;
	}
}

std::string	PhoneBook::get_point(std::string contact)
{
	if (contact.size() >= 10)
		contact[9] = '.';
	return (contact);
}

void	PhoneBook::search(void) //rechercher selon l'index
{
	int nbr;

	std::cout << "please enter a index number" << std::endl;
	std::cin >> nbr;
	if (std::cin.eof())
	return ;
	if (nbr < 0 || nbr > 8 || nbr >= index)
	{
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "wrong index" << std::endl;
		return ;
	}
	std::cout << "first name : " << _contact[nbr].get_firstname() << std::endl;
	std::cout << "last name : " << _contact[nbr].get_lastname() << std::endl;
	std::cout << "nickname : " << _contact[nbr].get_nickname() << std::endl;
	std::cout << "phone number : " << _contact[nbr].get_phonenumber() << std::endl;
	std::cout << "darkest secret : " << _contact[nbr].get_darkestsecret() << std::endl;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

}

