/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 22:50:04 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/09/01 23:44:02 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

void DiamondTrap::Init(void)
{
	_Hitpoints = FragTrap::Hitpoints;
	_EnergyPt = ScavTrap::Energypoints;
	_AttackDmg = FragTrap::AttackDamage;
	std::cout << "DiamondTrap " << _Name << " entered the game\n";
}

DiamondTrap::DiamondTrap()
{
	_Name = "NamelessDiamondTrap";
	Init();
}

DiamondTrap::DiamondTrap(std::string Name)
{
	_Name = Name;
	Init();
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << _Name << " exited the game\n";
}

void DiamondTrap::attack(std::string const & target)
{
	ScavTrap::attack(target);
}