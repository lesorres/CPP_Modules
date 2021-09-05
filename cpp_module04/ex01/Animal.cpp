/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 17:01:06 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/09/05 16:50:41 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Default constructor for Animal was called, no type was set\n";
	_Type = "no type";
}

Animal::~Animal()
{
	std::cout << "Destructor for Animal was called\n";
}

Animal::Animal(Animal const &src)
{
	*this = src;
}

Animal &Animal::operator=(Animal const &src)
{
	if (this == &src)
		return (*this);
	this->_Type = src._Type;
	return(*this);
}

void Animal::makeSound() const
{
	std::cout << "makeSound method was called for " << _Type << " making no sound\n";
}

std::string Animal::getType() const
{
	return(_Type);
}