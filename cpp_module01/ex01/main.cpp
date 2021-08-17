/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 17:05:57 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/08/15 18:18:06 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main ()
{
	Zombie zombie ("first_zombie");
	Zombie *zombieHord = zombie.zombieHorde(8, "zomb");
	zombie.deleteZomb(zombieHord);
	return (0);
}