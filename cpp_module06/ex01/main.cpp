/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 18:35:38 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/09/19 22:43:51 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct Data
{
	int i;
	char c;
};

uintptr_t serialize(Data* ptr)
{
	return(reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return(reinterpret_cast<Data *>(raw));
}

int main ()
{
	Data *initial_ptr = new Data;
	Data *copied_ptr;
	uintptr_t raw;

	raw = serialize(initial_ptr);
	copied_ptr = deserialize(raw);

	if (initial_ptr == copied_ptr)
		std::cout << "poiners are the same\nfirst poiner's adress: " << initial_ptr
		<< "\nsecond poiner's adress: "<< copied_ptr << "\n";

	delete (initial_ptr);
	return (0);
}