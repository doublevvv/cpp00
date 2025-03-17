/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlaggoun <vlaggoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 15:54:00 by vlaggoun          #+#    #+#             */
/*   Updated: 2025/03/17 14:13:56 by vlaggoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact(void)
{

}

Contact::~Contact(void)
{

}

void	Contact::set_firstname(std::string fname)
{
	this->_firstname = fname;
}
void	Contact::set_lastname(std::string lname)
{
	this->_lastname = lname;
}
void	Contact::set_nickname(std::string nname)
{
	this->_nickname = nname;
}

void	Contact::set_phonenumber(std::string pnumber)
{
	this->_phonenumber = pnumber;
}

void	Contact::set_darkestsecret(std::string dsecret)
{
	this->_darkestsecret = dsecret;
}

std::string	Contact::get_firstname(void)
{
	return (this->_firstname);
}

std::string	Contact::get_lastname(void)
{
	return (this->_lastname);
}

std::string	Contact::get_nickname(void)
{
	return (this->_nickname);
}
std::string	Contact::get_phonenumber(void)
{
	return (this->_phonenumber);
}

std::string	Contact::get_darkestsecret(void)
{
	return (this->_darkestsecret);
}
