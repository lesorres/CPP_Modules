/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 19:46:39 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/08/15 17:35:50 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
#include <iostream>

class Zombie
{
	std::string _name;

	public:

	Zombie(std::string name);
	~Zombie(void);

	void announce( void );
	Zombie* newZombie( std::string name );
	void randomChump( std::string name );
};

#endif