/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convertor.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 19:38:29 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/09/14 19:42:47 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTOR_HPP
#define CONVERTOR_CPP

#include <iostream>
class Convertor
{
private:
	std::string _Input;
	Convertor();
public:
	Convertor(std::string const argv);
	~Convertor();
};


Convertor::~Convertor()
{
}

#endif