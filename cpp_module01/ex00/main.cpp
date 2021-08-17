/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 13:58:52 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/08/15 14:06:57 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main ()
{
	Zombie zombie1("Ann");
	Zombie *zombie2 = zombie1.newZombie("John");
	zombie2->randomChump("Tom");
	delete(zombie2);
	return (0);
}