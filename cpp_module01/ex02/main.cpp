/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 19:54:42 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/08/15 20:33:21 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string>
# include <iostream>

int main ()
{
	std::string brain = "HI THIS IS BRAIN";
	std::string *stringPTR = &brain;
	std::string &stringREF = brain;

	std::cout << "string address in memory: " << &brain << std::endl;
	std::cout << "address by stringPTR: " << stringPTR << std::endl;
	std::cout << "address by stringREF: " << &stringREF << std::endl << std::endl;

	std::cout << "string by stringPTR: " << *stringPTR << std::endl;
	std::cout << "string by stringREF: " << stringREF << std::endl;

	return (0);
}