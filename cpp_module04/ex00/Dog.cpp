/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 18:39:25 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/09/05 17:09:54 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	_Type = "Dog";
	std::cout << "Default constructor for Dog was called, type was set to \"Dog\"\n";
}

Dog::~Dog()
{
	std::cout << "Destructor for Dog was called\n";
}

Dog::Dog(Dog const &src)
{
	*this = src;
}

Dog &Dog::operator=(Dog const &src)
{
	if (this == &src)
		return (*this);
	this->_Type = src._Type;
	return(*this);
}

void Dog::makeSound() const
{
	std::cout << "makeSound method was called for " << _Type << " making \"WOOF WOOF\" sound\n";
}