/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 18:41:52 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/09/06 20:21:52 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Default constructor for Cat was called, type was set to \"Cat\"\n";
	_Type = "Cat";
	_catBrain = new Brain();
}

Cat::~Cat()
{
	std::cout << "Destructor for Cat was called\n";
	delete _catBrain;
}

Cat::Cat(Cat const &src)
{
	std::cout << "Copy constructor for Dog was called\n";
	*this = src;
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