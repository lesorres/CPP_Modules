/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 18:43:17 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/09/08 21:48:49 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _Type(type)
{
}

AMateria::AMateria()
{
	_Type = "empty type";
}

AMateria::~AMateria()
{
}

std::string const & AMateria::getType() const
{
	return(_Type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << target.getName() << " is using no materia";
}