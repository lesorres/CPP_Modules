/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 19:02:33 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/09/08 23:20:09 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::~Ice()
{
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}

AMateria* Ice::clone() const
{
	AMateria *ice = new Ice();
	return (ice);
}

Ice::Ice(Ice const &src)
{
	*this = src;
}

Ice &Ice::operator=(Ice const &src)
{
	if (this == &src)
		return (*this);
	this->_Type = src._Type;
	return (*this);
}