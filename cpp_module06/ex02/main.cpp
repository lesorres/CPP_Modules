/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 22:51:38 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/09/20 19:25:58 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <iostream>

Base * generate(void)
{
	srand(time(0));
	int i = std::rand() % 3;
	if (i == 0)
		return (new A);
	if (i == 1)
		return (new B);
	return (new C);
	
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << "\n";
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << "\n";
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << "\n";
	else 
		std::cout << "error : could not indentify pointer type" << "\n";
}

void identify(Base& p)
{
	try
	{
		A a = dynamic_cast<A&>(p);
		std::cout << "A" << "\n";
		return;
	}
	catch (const std::exception &e)
	{
		std::cout << "A: "<<  e.what() << '\n';
	}
	try
	{
		B b = dynamic_cast<B&>(p);
		std::cout << "B" << "\n";
		return;
	}
	catch (const std::exception &e)
	{
		std::cout << "B: "<< e.what() << '\n';
	}
	try
	{
		C c = dynamic_cast<C&>(p);
		std::cout << "C" << "\n";
		return;
	}
	catch (const std::exception &e)
	{
		std::cout << "C: " << e.what() << '\n';
	}
}

int main ()
{
	Base *random = generate();
	std::cout << "\npointer to the random type object was generated\n\n";
	std::cout << "---identifying type using base type pointer to the object:---\n";
	identify(random);
	std::cout << "\n---identifying type using base type link to the object:---\n";
	identify(*random);

	delete random;
	return (0);
}