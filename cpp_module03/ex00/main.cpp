/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 20:13:57 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/09/01 18:46:46 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


void introducePlayers(ClapTrap & Nameless, ClapTrap & Marvin)
{
	std::cout << "\ninitial state of players:\n" << std::setfill(' ')
	<< std::setw(25) << Marvin.getName() << "|"
	<< std::setw(20) << Nameless.getName() << "|" << std::endl
	<< "Hit points:" << std::setw(15) << "10|" << std::setw(22) << "10|\n"
	<< "Energy points:" << std::setw(12) << "10|" << std::setw(22) << "10|\n"
	<< "Attack damage:" << std::setw(12) << "00|" << std::setw(23) << "00|\n\n";
}
int main ()
{
	ClapTrap Nameless;
	ClapTrap Marvin("Marvin");

	introducePlayers(Nameless, Marvin);

	Marvin.attack(Nameless.getName());
	Nameless.takeDamage(4);
	Nameless.beRepaired(2);
	Marvin.attack(Nameless.getName());
	Nameless.takeDamage(4);
	Nameless.attack(Marvin.getName());
	Marvin.takeDamage(4);
	Nameless.attack(Marvin.getName());
	Marvin.takeDamage(4);
	Nameless.beRepaired(1);
	Nameless.attack(Marvin.getName());
	Marvin.takeDamage(4);
	std::cout << Marvin.getName() << " losed\n\n";
	return (0);
}