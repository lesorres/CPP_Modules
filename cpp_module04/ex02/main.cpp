/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 17:24:46 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/09/06 20:51:27 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"
# include "Dog.hpp"
# include "Cat.hpp"
# include "Brain.hpp"

void fillInArray( Animal* array[10] )
{
	for (int i = 0; i < 5; ++i)
		array[i] = new Dog();
	for (int i = 5; i < 10; ++i)
		array[i] = new Cat();
}

int main()
{
	// Animal animal;
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;
	
	Animal *array[10];
	fillInArray(array);
	
	std::cout << "\n";
	array[2]->makeSound();
	array[6]->makeSound();
	std::cout << "\n";

	for (int i = 0; i < 10; ++i)
		delete array[i];
	std::cout << "\n";
	
	Dog dog1;
	Dog dog2(dog1);
	
	std::cout << "\nfirst dog brain adress: " << dog1.getBrain() << "\n"
	<< "second dog brain adress: " << dog2.getBrain() << "\n\n";
}