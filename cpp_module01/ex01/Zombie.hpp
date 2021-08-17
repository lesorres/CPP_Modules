/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 19:46:39 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/08/15 19:56:10 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{
	std::string _name;

	public:

	Zombie(void);
	Zombie(std::string name);
	~Zombie(void);

	std::string getNam(void);
	void announce( void );
	Zombie* zombieHorde(int N, std::string name);
	void deleteZomb(Zombie *zombieHorde);
};

#endif