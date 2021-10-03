/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 18:42:44 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/09/24 20:58:41 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>

int main ()
{
	std::vector<char> vect;
	std::list<int> lst;
	std::vector<char>::iterator vect_it;
	std::list<int>::iterator lst_it;

	for (int i = 0; i < 10; ++i)
	{
		vect.push_back(i + 65);
		lst.push_back(i);
	}

	try
	{
		vect_it = easyfind(vect, 'C');
		std::cout << "\'" << *vect_it << "\'"<< " was found in vect "
		<< "with position index = " << vect_it - vect.begin() << "\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		lst_it = easyfind(lst, 7);
		std::cout << *lst_it << " was found in lst " << "\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		vect_it = easyfind(vect, 'Z');
		std::cout << "\'" << *vect_it << "\'"<< " was found in vect "
		<< "with position index = " << vect_it - vect.begin() << "\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		lst_it = easyfind(lst, 78);
		std::cout << *lst_it << " was found in lst " << "\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}