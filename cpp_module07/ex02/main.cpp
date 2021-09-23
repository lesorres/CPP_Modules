/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 19:06:55 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/09/23 15:01:03 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}

	//SCOPE
	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);

		// std::cout << "\ntmp array address = " << tmp.getArrayAddress() << "\n"
		// << "numbers array address = " << numbers.getArrayAddress() << "\n"
		// << "test array address = " << test.getArrayAddress() << "\n"
		// <<  "tmp[1] = " << tmp[1] << "\n"
		// <<  "numbers[1] = " << numbers[1] << "\n"
		// <<  "test[1] = " << test[1] << "\n\n";
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
	}

	// std::cout << "\n";
	// Array<double> doubles(10);
	// for (int i = 0; i < 10; ++i)
	// {
	// 	const int value = rand();
	// 	doubles[i] = value;
	// }
	// for (int i = 0; i < 10; ++i)
	// {
	// 	std::cout << doubles[i] << "\n";
	// }

	delete [] mirror;//;

	return 0;
}