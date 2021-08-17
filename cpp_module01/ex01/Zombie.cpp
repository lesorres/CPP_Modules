/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 19:48:35 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/08/15 18:28:27 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	return ;
}

Zombie::Zombie(std::string name)
{
	_name = name;
	announce();
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << "<" << _name << "> has been destroyed" << std::endl;
	return ;
}

void Zombie::announce( void )
{
	std::cout << "<" << _name  << "> BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::deleteZomb(Zombie *zombieHorde)
{
	delete [] zombieHorde;
}