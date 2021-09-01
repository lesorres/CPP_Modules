/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 18:58:07 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/09/01 23:32:51 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
	protected:
		static const int Energypoints = 50;
	public:
		ScavTrap();
		ScavTrap(std::string Name);
		ScavTrap(ScavTrap const &src);
		~ScavTrap();
		ScavTrap &operator=(ScavTrap const &prm);

		void Init(void);

		void attack(std::string const & target);
		void guardGate();
};

# endif