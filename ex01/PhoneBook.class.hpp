/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlaggoun <vlaggoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 14:16:41 by vlaggoun          #+#    #+#             */
/*   Updated: 2025/03/17 17:33:53 by vlaggoun         ###   ########.fr       */
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
	void	search(int nbr);

private:

	Contact contact[8];

};

#endif
