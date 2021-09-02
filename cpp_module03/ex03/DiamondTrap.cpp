/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 22:50:04 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/09/02 21:39:19 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

void DiamondTrap::Init(void)
{
	_Hitpoints = FragTrap::Hitpoints;
	_EnergyPt = ScavTrap::Energypoints;
	_AttackDmg = FragTrap::AttackDamage;
	std::cout << "DiamondTrap " << _internalName << " entered the game\n";
}

DiamondTrap::DiamondTrap()
{
	_internalName = "NamelessDiamondTrap";
	ClapTrap::_Name = _internalName + "_clap_name";
	Init();
}

DiamondTrap::DiamondTrap(std::string Name)
{
	_internalName = Name;
	ClapTrap::_Name = Name + "_clap_name";
	Init();
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << _internalName << " exited the game\n";
}

void DiamondTrap::attack(std::string const & target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "\nDimondTrap name: " << _internalName << std::endl
	<< "ClapTrap name: " << _Name << std::endl;
}