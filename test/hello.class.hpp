/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hello.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlaggoun <vlaggoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 13:43:35 by vlaggoun          #+#    #+#             */
/*   Updated: 2025/03/11 15:53:01 by vlaggoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HELLO_CLASS_HPP
# define HELLO_CLASS_HPP

class	Hello
{
public:

	// int	nbr;

	// int	const	nbr1;
	// int	nbr2;

	void function(void);
	// Hello(int test1, int test2);
	Hello(void);
	~Hello(void);

	int	getvar(void) const;
	void	setvar(int v);

private:

	int _var;
};

#endif
