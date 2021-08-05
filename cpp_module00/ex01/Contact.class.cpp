/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 20:39:03 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/08/06 00:10:37 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"
#include <iostream>

Contact::Contact (void) {
	
	std::cout << "Constructor called" << std::endl;
	return;
}

Contact::~Contact (void) {
	
	std::cout << "Derstructor called" << std::endl;
	return;
}


void Contact::fill_in_firstname(std::string str) {

// 	// std::cout << "Enter firstname";

// 	// std::cin >> _first_name;
	_first_name = str;
	std::cout << _first_name;
	return;
}

void Contact::set_first_name(std::string str){
	_first_name = str;
	std::cout << "first name inserted: " << _first_name << std::endl;
	return;
}

void Contact::set_last_name(std::string str){
	_last_name = str;
	std::cout << "last name inserted: " << _last_name << std::endl;
	return;
}

void Contact::set_nickname(std::string str){
	_nickname = str;
	std::cout << "nickname inserted: " << _nickname << std::endl;
	return;
}

void Contact::set_phone_number(std::string str){
	_phone_number = str;
	std::cout << "phone number inserted: " << _phone_number << std::endl;
	return;
}

void Contact::set_darkest_secret(std::string str){
	_darkest_secret = str;
	std::cout << "darkest secret inserted: " << _darkest_secret << std::endl;
	return;
}