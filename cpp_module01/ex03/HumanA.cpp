/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 22:10:03 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/08/16 20:55:53 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string aName, Weapon &aWeapon) : _aName(aName), _aWeapon(aWeapon)
{
}

HumanA::~HumanA()
{
		return;
}

void HumanA::attack()
{
	std::cout << _aName << " attacks with his "\
	<< _aWeapon.getType() << std::endl;
}