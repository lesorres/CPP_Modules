/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 18:41:52 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/09/05 16:34:57 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	_Type = "WrongCat";
	std::cout << "Default constructor for WrongCat was called, type was set to \"WrongCat\"\n";
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor for WrongCat was called\n";
}

WrongCat::WrongCat(WrongCat const &src)
{
	*this = src;
}

WrongCat &WrongCat::operator=(WrongCat const &src)
{
	if (this == &src)
		return (*this);
	this->_Type = src._Type;
	return(*this);
}

void WrongCat::makeSound() const
{
	std::cout << "makeSound method was called for " << _Type << " making \"MEOW MEOW\" sound\n";
}