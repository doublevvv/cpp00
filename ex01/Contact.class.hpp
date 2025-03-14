/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlaggoun <vlaggoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 14:15:31 by vlaggoun          #+#    #+#             */
/*   Updated: 2025/03/14 14:16:24 by vlaggoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP
#include <iostream>

class Contact
{

public:

	Contact(void);
	~Contact(void);
	void	get_firstname(std::string fname);
	void	get_lastname(std::string lname);
	void	get_nickname(std::string nname);
	void	get_darkestsecret(std::string dsecret);
	std::string	set_firstname(void);
	std::string	set_lastname(void);
	std::string	set_nickname(void);
	std::string	set_darkestsecret(void);

private:

	std::string	_firstname;
	std::string	_lastname;
	std::string	_nickname;
	std::string	_darkestsecret;

};


#endif
