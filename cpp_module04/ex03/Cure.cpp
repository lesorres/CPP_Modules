/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 19:03:05 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/09/08 23:36:36 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::~Cure()
{
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *\n";
}

AMateria* Cure::clone() const
{
	AMateria *cure = new Cure();
	return (cure);
}

Cure::Cure(Cure const &src)
{
	*this = src;
}

Cure &Cure::operator=(Cure const &src)
{
	if (this == &src)
		return (*this);
	this->_Type = src._Type;
	return (*this);
}