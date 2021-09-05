/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 17:20:01 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/09/05 20:44:54 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain* _dogBrain;
	public:
		Dog();
		Dog(Dog const &src);
		virtual ~Dog();
		Dog &operator=(Dog const &src);

		virtual void makeSound() const;
		Brain* getBrain();
};

#endif
