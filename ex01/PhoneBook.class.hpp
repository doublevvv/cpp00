/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlaggoun <vlaggoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 14:16:41 by vlaggoun          #+#    #+#             */
/*   Updated: 2025/03/18 16:22:52 by vlaggoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP

#include <iostream>
#include "Contact.class.hpp"
#include <string>
#include <iomanip>

class PhoneBook
{
public:

	PhoneBook(void);
	~PhoneBook(void);

	int	index;

	void	add_contact(std::string response);
	void	display(void);
	void	search(void);
	std::string	get_point(std::string contact);

private:

	Contact _contact[8];

};

#endif
