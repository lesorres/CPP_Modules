/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 18:51:45 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/09/10 22:22:25 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main ()
{
	std::cout << "\n";
	try
	{
		Bureaucrat Bob ("Bob", 151);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << "\n";
	}
	std::cout << "\n";

	try
	{
		Bureaucrat Bob ("Bob", 0);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << "\n";
	}
	std::cout << "\n";

	try
	{
		Bureaucrat Bob ("Bob", 150);
		Bureaucrat Rob ("Rob", 50);
		Bureaucrat Tim ("Tim", 1);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << "\n";
	}
	std::cout << "\n";
	
	try
	{
		Bureaucrat Bob ("Bob", 150);
		Bureaucrat Rob ("Rob", 50);
		Bureaucrat Tim ("Tim", 1);
		Tim.incGrade();
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << "\n";
	}
	std::cout << "\n";

	try
	{
		Bureaucrat Bob ("Bob", 150);
		Bob.decGrade();
		Bureaucrat Rob ("Rob", 50);
		Bureaucrat Tim ("Tim", 1);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << "\n";
	}
	std::cout << "\n";
}