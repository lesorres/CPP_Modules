/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 22:42:25 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/08/07 00:15:34 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"
#include <iostream>

Phonebook::Phonebook (void) {
	Phonebook::_index = 0;
	Phonebook::_full = 0;
	std::cout << "Constructor called" << std::endl;
	return;
}
Phonebook::~Phonebook (void) {
	
	std::cout << "Derstructor called" << std::endl;
	return;
}
int Phonebook::get_index(){
	return (this->_index);
}
void Phonebook::set_full(){
	this->_full = 1;
}
int Phonebook::get_full(){
	return (this->_full);
}
void Phonebook::add_new_contact(){
	std::string line;


	std::cout << "\ninsert first name: ";
	std::getline(std::cin, line);
	this->_contact[this->_index].set_first_name(line);

	std::cout << "insert last name: ";
	std::getline(std::cin, line);
	this->_contact[this->_index].set_last_name(line);

	std::cout << "insert nickname: ";
	std::getline(std::cin, line);
	this->_contact[this->_index].set_nickname(line);

	std::cout << "insert phone number: ";
	std::getline(std::cin, line);
	this->_contact[this->_index].set_phone_number(line);

	std::cout << "insert darkest secret: ";
	std::getline(std::cin, line);
	this->_contact[this->_index].set_darkest_secret(line);
	std::cout << "contact for " << this->_contact[this->_index].get_first_name() << \
	" "<< this->_contact[this->_index].get_last_name() << " was added" << std::endl;
	std::cout << std::endl;

	this->_index++;
	if (this->_index == CONT_NUM)
	{
		this->_index = 0;
		this->set_full();
	}
}
void Phonebook::init_contacts(){
	this->_contact[this->_index].set_first_name("");
	this->_contact[this->_index].set_last_name("");
	this->_contact[this->_index].set_nickname("");
	this->_contact[this->_index].set_phone_number("");
	this->_contact[this->_index].set_darkest_secret("");
}
void Phonebook::print_contacts(){
	int i = 0;

	while ((i < this->get_index() && this->get_full() == 0) || (i < CONT_NUM && this->get_full() == 1))
	{
		if (this->_contact[i].get_first_name().length() > 10)
			std::cout << this->_contact[i].get_first_name().substr(0, 9) << ".|";
		else
		{
			while (this->_contact[i].get_first_name().length() < 10)
				this->_contact[i].get_first_name().operator+=(' ');
			std::cout << this->_contact[i].get_first_name() << "|";
		}
		std::cout << this->_contact[i].get_last_name().substr(0, 10) << std::endl;
		std::cout << this->_contact[i].get_nickname().substr(0, 10) << std::endl;
		std::cout << this->_contact[i].get_phone_number().substr(0, 10) << std::endl;
		std::cout << this->_contact[i].get_darkest_secret().substr(0, 10) << std::endl;
		std::cout << std::endl;
		i++;
	}
}