/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 21:39:39 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/09/02 21:46:47 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void FragTrap::Init(void)
{
	_Hitpoints = 100;
	_EnergyPt = 100;
	_AttackDmg = 30;
	std::cout << "FragTrap " << _Name << " entered the game\n";
}

FragTrap::FragTrap()
{
	_Name = "NamelessFragTrap";
	Init();
}

FragTrap::FragTrap(std::string Name)
{
	_Name = Name;
	Init();
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << _Name << " exited the game\n";
}

void FragTrap::attack(std::string const & target)
{
	_EnergyPt--;
	std::cout << "FragTrap " <<_Name << " attack " << target
		<< ", causing 50 points of damage!\n\n";
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "Positive high fives request from FragTrap " << _Name << std::endl << std::endl; 
}