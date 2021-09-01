/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 22:49:51 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/09/01 23:33:44 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string _internalName;
	public:
		DiamondTrap();
		DiamondTrap(std::string Name);
		DiamondTrap(DiamondTrap const &src);
		~DiamondTrap();
		DiamondTrap &operator=(FragTrap const &prm);

		void Init(void);
		void attack(std::string const & target);
};
