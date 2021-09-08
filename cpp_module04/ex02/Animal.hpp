/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 17:00:54 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/09/06 20:39:03 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

class Animal
{
	protected:
		std::string _Type;
	public:
		Animal();
		Animal(Animal const &src);
		virtual ~Animal();

		Animal &operator=(Animal const &src);
		virtual void makeSound() const = 0;
		std::string getType() const;
};

#endif
