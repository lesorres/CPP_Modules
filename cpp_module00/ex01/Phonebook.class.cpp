/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 22:42:25 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/08/04 22:40:32 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"
#include <iostream>

Phonebook::Phonebook (void) {
	
	Phonebook::_index = 0;
	std::cout << "Constructor called" << std::endl;
	return;
}

Phonebook::~Phonebook (void) {
	
	std::cout << "Derstructor called" << std::endl;
	return;
}