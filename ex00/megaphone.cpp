/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlaggoun <vlaggoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 09:16:52 by vlaggoun          #+#    #+#             */
/*   Updated: 2025/03/12 13:53:38 by vlaggoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int	main(int ac, char **av)
{
	int j = 1;

	if (ac < 2)
	std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (av[j])
		{
			std::string str = std::string(av[j]);
			int i = 0;
			while (str[i])
			{
				std::cout << (char)std::toupper(str[i]);
				i++;
			}
			j++;
		}
		std::cout << std::endl;
	}
	return (0);
}
