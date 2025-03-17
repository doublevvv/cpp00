/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlaggoun <vlaggoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 14:15:31 by vlaggoun          #+#    #+#             */
/*   Updated: 2025/03/17 14:13:25 by vlaggoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP
#include <iostream>
#include <string>

class Contact
{

public:

	Contact(void);
	~Contact(void);
	void	set_firstname(std::string fname);
	void	set_lastname(std::string lname);
	void	set_nickname(std::string nname);
	void	set_phonenumber(std::string pnumber);
	void	set_darkestsecret(std::string dsecret);
	std::string	get_firstname(void);
	std::string	get_lastname(void);
	std::string	get_nickname(void);
	std::string	get_phonenumber(void);
	std::string	get_darkestsecret(void);

private:

	std::string	_firstname;
	std::string	_lastname;
	std::string	_nickname;
	std::string _phonenumber;
	std::string	_darkestsecret;

};


#endif
