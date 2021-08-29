/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 22:13:42 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/08/29 22:35:54 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	_fpVal = 0;
}

Fixed::Fixed(int i)
{
	std::cout << "Int constructor called" << std::endl;
	_fpVal = i <<_numOfFb;
}

Fixed::Fixed(float f)
{
	std::cout << "Float constructor called" << std::endl;
	_fpVal = roundf(f * (1 << _numOfFb));
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
	this->setRawBits(prm.getRawBits());
	return (*this);
}

int Fixed::getRawBits( void ) const
{
	return(this->_fpVal);
}

void Fixed::setRawBits( int const raw )
{
	this->_fpVal = raw;
}

std::ostream &operator<<(std::ostream &o, Fixed const &prm)
{
	o << prm.toFloat();
	return (o);
}

float Fixed::toFloat( void ) const
{
	return(static_cast<float>(_fpVal) / static_cast<float>(1 << _numOfFb));
}

int Fixed::toInt( void ) const
{
	return(_fpVal >> _numOfFb);
}

Fixed Fixed::operator*(Fixed const &num)
{
	Fixed ret;
	ret._fpVal = (this->_fpVal * num._fpVal) >> this->_numOfFb;
	return (ret);
}

Fixed Fixed::operator/(Fixed const &num)
{
	Fixed ret;
	ret._fpVal = ((this->_fpVal << this->_numOfFb )/ num._fpVal) ;
	return (ret);
}

const int Fixed::_numOfFb = 8;