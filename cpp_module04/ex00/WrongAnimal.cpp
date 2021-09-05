/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 17:01:06 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/09/05 16:50:54 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "Default constructor for WrongAnimal was called, no type was set\n";
	_Type = "no type";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor for WrongAnimal was called\n";
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
	*this = src;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &src)
{
	if (this == &src)
		return (*this);
	this->_Type = src._Type;
	return(*this);
}

void WrongAnimal::makeSound() const
{
	std::cout << "makeSound method was called for " << _Type << " making no sound\n";
}

std::string WrongAnimal::getType() const
{
	return(_Type);
}