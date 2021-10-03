/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 21:15:14 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/09/27 16:46:32 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <iostream>

int main()
{
	std::cout << "\n--- Case 1: ---\n";
	try
	{
		Span sp = Span(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << "shortestSpan of sp: " << sp.shortestSpan() << std::endl;
		std::cout << "longestSpan of sp : " << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << "\n";
	}

	std::cout << "\n--- Case 2: ---\n";
	try
	{
		Span sp2 = Span(5);
		sp2.addNumber(-2147483648);
		sp2.addNumber(2147483647);
		sp2.addNumber(1);
		sp2.addNumber(2);
		sp2.addNumber(3);
		std::cout << "shortestSpan of sp2: " << sp2.shortestSpan() << std::endl;
		std::cout << "longestSpan of sp2 : " << sp2.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << "\n";
	}

	std::cout << "\n--- Case 3: ---\n";
	try
	{
		Span sp3(3000);
		srand(time(NULL));
		for (int i = 0; i < 3000; ++i)
			sp3.addNumber(rand());
		std::cout << "shortestSpan of sp3: " << sp3.shortestSpan() << std::endl;
		std::cout << "longestSpan of sp3 : " << sp3.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << "\n";
	}

	std::cout << "\n--- Case 4: ---\n";
		try
	{
		Span sp4 = Span(2);
		sp4.addNumber(1);
		sp4.addNumber(2);
		sp4.addNumber(3);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << "\n";
	}

	std::cout << "\n--- Case 5: ---\n";
	try
	{
		Span sp5 = Span(2);
		std::cout << sp5.shortestSpan() << std::endl;
		std::cout << sp5.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << "\n";
	}

	std::cout << "\n--- Case 6: ---\n";
	try
	{	
		Span sp6 = Span(4);
		std::vector<int> tmp;
		tmp.push_back(1);
		tmp.push_back(4);
		tmp.push_back(18);
		tmp.push_back(11);

		sp6.fillInSpan(tmp.begin(), tmp.end());

		std::cout << sp6.shortestSpan() << std::endl;
		std::cout << sp6.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << "\n";
	}
}