/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 22:04:03 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/08/16 19:44:32 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon
{
private:
	std::string _type;
	
public:
	Weapon(void);
	Weapon(std::string weaponType);
	~Weapon(void);

	std::string const & getType() const;
	void setType(std::string weaponType);
};

#endif