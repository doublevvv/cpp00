/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlaggoun <vlaggoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 14:16:41 by vlaggoun          #+#    #+#             */
/*   Updated: 2025/03/14 16:23:27 by vlaggoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP
#include <iostream>

class PhoneBook
{
public:

	PhoneBook(void);
	~PhoneBook(void);

	void	add_contact(std::string contact);

};

#endif
