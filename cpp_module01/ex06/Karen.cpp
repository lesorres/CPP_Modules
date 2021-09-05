/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 18:57:08 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/08/18 22:15:39 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void Karen::init_input_array()
{
	_input[0] = "DEBUG";
	_input[1] = "INFO";
	_input[2] = "WARNING";
	_input[3] = "ERROR";
}
void Karen::init_method_array()
{
	methods[0] = &Karen::debug;
	methods[1] = &Karen::info;
	methods[2] = &Karen::warning;
	methods[3] = &Karen::error;
}
Karen::Karen()
{
	init_input_array();
	init_method_array();
}
Karen::~Karen()
{
}
void Karen::complain(std::string level)
{
	int i = 0;
	while (i < 4)
	{
		if (level == _input[i])
			break;
		i++;
	}
	switch (i)
	{
		case 4:
			std::cout << "[ Probably complaining about insignificant problems ]\n";
			break;
		default:
			while (i < 4)
				(this->*this->methods[i++])();
			break;
	}
}
void Karen::debug(void)
{
	std::cout << "[ DEBUG ]\n"\
	<< "I love to get extra bacon for my "\
	<< "7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!\n"\
	<< std::endl;
}
void Karen::info(void)
{
	std::cout << "[ INFO ]\n"\
	<< "I cannot believe adding extra bacon cost more money. "\
	<< "You don’t put enough! If you did I would not have to ask for it!\n"\
	<< std::endl;
}
void Karen::warning(void)
{
	std::cout << "[ WARNING ]\n"\
	<< "I think I deserve to have some extra bacon for free. "\
	<< "I’ve been coming here for years and you just started working here last month.\n"\
	<< std::endl;
}
void Karen::error(void)
{
	std::cout << "[ ERROR ]\n"\
	<< "This is unacceptable, I want to speak to the manager now.\n"\
	<< std::endl;
}
