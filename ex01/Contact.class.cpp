/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlaggoun <vlaggoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 15:54:00 by vlaggoun          #+#    #+#             */
/*   Updated: 2025/03/14 14:40:46 by vlaggoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact(void)
{

}

Contact::~Contact(void)
{

}

void	Contact::get_firstname(std::string fname)
{
	this->_firstname = fname;
}
void	Contact::get_lastname(std::string lname)
{
	this->_lastname = lname;
}
void	Contact::get_nickname(std::string nname)
{
	this->_nickname = nname;
}

void	Contact::get_darkestsecret(std::string dsecret)
{
	this->_darkestsecret = dsecret;
}

std::string	Contact::set_firstname(void)
{
	return (this->_firstname);
}

std::string	Contact::set_lastname(void)
{
	return (this->_lastname);
}

std::string	Contact::set_nickname(void)
{
	return (this->_nickname);
}

std::string	Contact::set_darkestsecret(void)
{
	return (this->_darkestsecret);
}
