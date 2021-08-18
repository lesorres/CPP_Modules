/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 20:06:44 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/08/18 21:07:17 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Karen.hpp"

// void SetMember(void (Karen::*Ptype)(void))
// {
//     (karen.*Ptype)(); // вызов метода из объекта по указателю fPtr
// }


int main ()
{
	std::string line;
	Karen karen;
	std::cout << "Here what you can type to see Karen's response:\n\n"\
	<< "\"Debug\"\n"\
	<< "\"Info\"\n"\
	<< "\"Warning\"\n"\
	<< "\"Error\"\n\n"\
	<< "Please, type your message: ";
	std::getline(std::cin, line);
	karen.complain(line);

	return (0);
}