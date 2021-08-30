/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 22:13:42 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/08/30 22:44:44 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_numOfFb = 8;

Fixed::Fixed()
{
	// std::cout << "Default constructor called" << std::endl;
	_fpVal = 0;
}

Fixed::Fixed(int i)
{
	// std::cout << "Int constructor called" << std::endl;
	_fpVal = i <<_numOfFb;
}

Fixed::Fixed(float f)
{
	// std::cout << "Float constructor called" << std::endl;
	_fpVal = roundf(f * (1 << _numOfFb));
}

Fixed::Fixed(Fixed const &src)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(Fixed const &prm)
{
	// std::cout << "Assignation operator called" << std::endl;
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

/********** math operators **********/

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

Fixed Fixed::operator+(Fixed const &num)
{
	Fixed ret;
	ret._fpVal = this->_fpVal + num._fpVal;
	return (ret);
}

Fixed Fixed::operator-(Fixed const &num)
{
	Fixed ret;
	ret._fpVal = this->_fpVal - num._fpVal;
	return (ret);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	this->_fpVal++;
	return (tmp);
}
Fixed Fixed::operator++()
{
	this->_fpVal++;
	return(*this);
}
Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	this->_fpVal--;
	return (tmp);
}
Fixed Fixed::operator--()
{
	this->_fpVal--;
	return(*this);
}

/********** logical operators **********/

bool Fixed::operator>(Fixed const &num) const
{
	return (this->_fpVal > num._fpVal);
}

bool Fixed::operator<(Fixed const &num) const
{
	return (this->_fpVal < num._fpVal);
}

bool Fixed::operator>=(Fixed const &num) const
{
	return (this->_fpVal >= num._fpVal);
}

bool Fixed::operator<=(Fixed const &num) const
{
	return (this->_fpVal <= num._fpVal);
}

bool Fixed::operator==(Fixed const &num) const
{
	return (this->_fpVal == num._fpVal);
}

bool Fixed::operator!=(Fixed const &num) const
{
	return (this->_fpVal != num._fpVal);
}

/********** min & max **********/

Fixed& Fixed::min( Fixed& a, Fixed& b )
{
	if (a > b)
		return(b);
	return(a);
}
Fixed& Fixed::max( Fixed& a, Fixed& b )
{
	if (a < b)
		return(b);
	return(a);
}
const Fixed& Fixed::min( const Fixed& a, const Fixed& b )
{
	if (a > b)
		return(b);
	return(a);
}
const Fixed& Fixed::max( const Fixed& a, const Fixed& b )
{
	if (a < b)
		return(b);
	return(a);
}
