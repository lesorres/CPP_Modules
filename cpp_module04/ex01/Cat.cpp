/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 18:41:52 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/09/05 22:49:28 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	_Type = "Cat";
	_catBrain = new Brain();
	std::cout << "Default constructor for Cat was called, type was set to \"Cat\"\n";
}

Cat::~Cat()
{
	delete _catBrain;
	std::cout << "Destructor for Cat was called\n";
}

Cat::Cat(Cat const &src)
{
	*this = src;
	std::cout << "Copyconstructor for Dog was called\n";
}

Cat &Cat::operator=(Cat const &src)
{
	if (this == &src)
		return (*this);
	this->_Type = src._Type;
	return(*this);
}

void Cat::makeSound() const
{
	std::cout << "makeSound method was called for " << _Type << " making \"MEOW MEOW\" sound\n";
}

Brain* Cat::getBrain()
{
	return(_catBrain);
}