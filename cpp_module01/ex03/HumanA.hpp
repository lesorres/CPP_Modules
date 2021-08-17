/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 22:05:08 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/08/16 20:56:19 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
private:
	std::string _aName;
	Weapon &_aWeapon;

public:
	HumanA();
	HumanA(std::string aName, Weapon &aWeapon);
	~HumanA();

	void attack();
};

#endif
