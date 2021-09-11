/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 18:51:45 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/09/11 22:09:26 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main ()
{
	try
	{
		Form form1("Form101", 10, 10);
		Form form5("Form105", 151, 151);
		Form form0("Form100", 0, 0);
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

		Form form1("Form101", 10, 10);
		Form form7("Form107", 70, 70);

		Bob.signForm(form7);
		Rob.signForm(form1);
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

		Form form1("Form101", 10, 10);
		Form form7("Form107", 70, 70);

		Rob.signForm(form7);
		Tim.signForm(form1);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << "\n";
	}
}