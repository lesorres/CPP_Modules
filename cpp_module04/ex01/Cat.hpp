/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 17:20:33 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/09/05 20:47:17 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain* _catBrain;
	public:
		Cat();
		Cat(Cat const &src);
		virtual ~Cat();
		Cat &operator=(Cat const &src);

		virtual void makeSound() const;
		Brain* getBrain();
};

# endif