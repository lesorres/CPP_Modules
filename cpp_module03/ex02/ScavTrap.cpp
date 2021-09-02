/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 18:58:04 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/09/01 21:26:22 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void ScavTrap::Init(void)
{
	_Hitpoints = 100;
	_EnergyPt = 50;
	_AttackDmg = 20;
	std::cout << "ScavTrap " << _Name << " entered the game\n";
}

ScavTrap::ScavTrap()
{
	_Name = "NamelessScavTrap";
	Init();
}

ScavTrap::ScavTrap(std::string Name)
{
	_Name = Name;
	Init();
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _Name << " exited the game\n";
}

void ScavTrap::attack(std::string const & target)
{
	_EnergyPt--;
	std::cout << "ScavTrap " <<_Name << " attack " << target
		<< ", causing 40 points of damage!\n\n";
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _Name << " have enterred in Gate keeper mode\n\n";
}