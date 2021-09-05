/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 18:39:25 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/09/05 22:49:23 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	_Type = "Dog";
	_dogBrain = new Brain();
	std::cout << "Default constructor for Dog was called, type was set to \"Dog\"\n";
}

Dog::~Dog()
{
	delete _dogBrain;
	std::cout << "Destructor for Dog was called\n";
}

Dog::Dog(Dog const &src)
{
	*this = src;
	std::cout << "Copyconstructor for Dog was called\n";
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