/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 22:13:42 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/08/27 20:10:12 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	_fpVal = 0;
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(Fixed const &prm)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this == &prm)
		return (*this);
	this->_fpVal = prm.getRawBits();
	return (*this);
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return(this->_fpVal);
}

void Fixed::setRawBits( int const raw )
{
	this->_fpVal = raw;
}

const int Fixed::_numOfFb = 8;