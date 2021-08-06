/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 20:39:03 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/08/06 22:59:13 by kmeeseek         ###   ########.fr       */
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
void Contact::set_first_name(std::string str){
	_first_name = str;
	std::cout << "first name inserted: " << _first_name << std::endl << std::endl;
	return;
}
void Contact::set_last_name(std::string str){
	_last_name = str;
	std::cout << "last name inserted: " << _last_name << std::endl << std::endl;
	return;
}
void Contact::set_nickname(std::string str){
	_nickname = str;
	std::cout << "nickname inserted: " << _nickname << std::endl << std::endl;
	return;
}
void Contact::set_phone_number(std::string str){
	_phone_number = str;
	std::cout << "phone number inserted: " << _phone_number << std::endl << std::endl;
	return;
}
void Contact::set_darkest_secret(std::string str){
	_darkest_secret = str;
	std::cout << "darkest secret inserted: " << _darkest_secret << std::endl << std::endl;
	return;
}
std::string Contact::get_first_name(){
	return (_first_name);
}
std::string Contact::get_last_name(){
	return (_last_name);
}
std::string Contact::get_nickname(){
	return (_nickname);
}
std::string Contact::get_phone_number(){
	return (_phone_number);
}
std::string Contact::get_darkest_secret(){
	return (_darkest_secret);
}