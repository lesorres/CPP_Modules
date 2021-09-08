/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 18:39:25 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/09/06 20:21:48 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Default constructor for Dog was called, type was set to \"Dog\"\n";
	_Type = "Dog";
	_dogBrain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Destructor for Dog was called\n";
	delete _dogBrain;
}

Dog::Dog(Dog const &src)
{
	std::cout << "Copy constructor for Dog was called\n";
	*this = src;
}

Dog &Dog::operator=(Dog const &src)
{
	if (this == &src)
		return (*this);
	this->_Type = src._Type;
	this->_dogBrain = new Brain();
	*(this->_dogBrain) = *(src._dogBrain);
	return(*this);
}

void Dog::makeSound() const
{
	std::cout << "makeSound method was called for " << _Type << " making \"WOOF WOOF\" sound\n";
}

Brain* Dog::getBrain()
{
	return(_dogBrain);
}