/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 21:38:17 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/09/01 23:27:33 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
	protected:
		static const int Hitpoints = 100;
		static const int AttackDamage = 30;
	public:
		FragTrap();
		FragTrap(std::string Name);
		FragTrap(FragTrap const &src);
		~FragTrap();
		FragTrap &operator=(FragTrap const &prm);

		void Init(void);

		void attack(std::string const & target);
		void highFivesGuys(void);
};

# endif