/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 21:17:12 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/08/16 21:32:40 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weaponType)
{
	_type = weaponType;
}

Weapon::~Weapon(void)
{
	return;
}


std::string const & Weapon::getType() const
{
	return (_type);
}

void Weapon::setType(std::string weaponType)
{
	_type = weaponType;
}