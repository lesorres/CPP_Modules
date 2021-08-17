/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 22:14:18 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/08/16 21:14:16 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string bName)
{
	_bName = bName;
	_bWeapon = NULL;
}

HumanB::~HumanB()
{
	return;
}

void HumanB::attack()
{
	if (!_bWeapon)
		std::cout << _bName << " attacks with nothing" << std::endl;
	else
		std::cout << _bName << " attacks with his "\
		<< _bWeapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &bWeapon)
{
	_bWeapon = &bWeapon;
}
