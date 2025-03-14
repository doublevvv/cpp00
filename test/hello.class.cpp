/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hello.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlaggoun <vlaggoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 13:46:59 by vlaggoun          #+#    #+#             */
/*   Updated: 2025/03/14 08:58:43 by vlaggoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hello.class.hpp"
#include <iostream>

// * SCOPE est l'endroit ou fonction s'accomplit

Hello::Hello(void)
{
	// char buff[250];
	std::cout<< "Constrctor called" << std::endl;
	// this->nbr = 42;
	// std::cout<< "this->nbr = " << this->nbr << std::endl;
	// std::cout<< "nbr1 = " << nbr1 << std::endl;
	// std::cout<< "nbr2 = " << nbr2 << std::endl;
	// this->function();
	// // std::cin >>buff;
	std::cout<< "var =" << this->_var << std::endl;
	return ;
}

Hello::~Hello(void)
{
	// char buff[250];
	// std::cout<< "Destruction constructor" << std::endl;
	// std::cin >>buff;
	return ;
}

void	Hello::function(void)
{
	std::cout << "function ok" << std::endl;
}

int	Hello::getvar(void) const
{
	return (this->_var);
}

void	Hello::setvar(int v)
{
	if (v > 0)
		this->_var = v;
	return ;
}
