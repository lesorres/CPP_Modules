/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 17:31:20 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/09/05 19:12:08 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Default constructor for Brain was called\n";
}

Brain::~Brain()
{
	std::cout << "Destructor for Brain was called\n";
}

Brain::Brain(Brain const &src)
{
	*this = src;
}

Brain &Brain::operator=(Brain const &src)
{
	if (this == &src)
		return (*this);
	int i = 0;
	while (i < 100)
	{
		this->idea[i] = src.idea[i];
		i++;
	}
	return(*this);
}