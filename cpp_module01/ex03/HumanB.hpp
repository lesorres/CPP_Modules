/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 22:05:08 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/08/16 21:11:56 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
private:
	Weapon *_bWeapon;
	std::string _bName;

public:
	HumanB();
	HumanB(std::string bName);
	~HumanB();

	void attack();
	void setWeapon(Weapon &bWeapon);
};


# endif
