/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 20:13:57 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/09/01 21:06:10 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void introducePlayers(ClapTrap & Nameless, ClapTrap & Marvin)
{
	std::cout << "\ninitial state of players:\n" << std::setfill(' ')
	<< std::setw(25) << Marvin.getName() << "|"
	<< std::setw(20) << Nameless.getName() << "|" << std::endl
	<< "Hit points:" << std::setw(15) << "100|" << std::setw(22) << "100|\n"
	<< "Energy points:" << std::setw(12) << "50|" << std::setw(22) << "50|\n"
	<< "Attack damage:" << std::setw(12) << "20|" << std::setw(23) << "20|\n\n";
}
int main ()
{
	ScavTrap Nameless;
	ScavTrap Marvin("Marvin");

	introducePlayers(Nameless, Marvin);

	Marvin.guardGate();
	Marvin.attack(Nameless.getName());
	Nameless.takeDamage(40);
	Nameless.beRepaired(20);
	Marvin.attack(Nameless.getName());
	Nameless.takeDamage(40);
	std::cout << Nameless.getName() << " losed\n\n";
	return (0);
}