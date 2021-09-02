/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 20:13:51 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/09/01 22:45:12 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void ClapTrap::Init(void)
{
	_Hitpoints = 10;
	_EnergyPt = 10;
	_AttackDmg = 0;
	std::cout << "ClapTrap "<< _Name << " entered the game\n";
}

ClapTrap::ClapTrap()
{
	_Name = "NamelessClapTrap";
	Init();
}

ClapTrap::ClapTrap(std::string Name)
{
	_Name = Name;
	Init();
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _Name << " exited the game\n";
}

ClapTrap &ClapTrap::operator=(ClapTrap const &prm)
{
	if (this == &prm)
		return (*this);
		this->_Name = prm._Name;
		this->_Hitpoints = prm._Hitpoints;
		this->_EnergyPt = prm._EnergyPt;
		this->_AttackDmg = prm._AttackDmg;
	return (*this);
}

void ClapTrap::attack(std::string const & target)
{
	_EnergyPt--;
	std::cout <<_Name << " attack " << target
		<< ", causing 4 points of damage!\n\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
	_AttackDmg += amount;
	_Hitpoints -= amount;
	std::cout << _Name << " get " << amount 
		<< " point of damage, total damage is "
		<< _AttackDmg << " and hit points is " << _Hitpoints << " now\n\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	_Hitpoints += amount;
	std::cout << _Name << " was repaired by " << amount
		<<" points, total hit points is " << _Hitpoints << " now\n\n";
}

std::string ClapTrap::getName(void)
{
	return (_Name);
}