/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 17:24:46 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/09/05 22:48:31 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"
# include "Dog.hpp"
# include "Cat.hpp"
# include "Brain.hpp"

// void fillInArray(Animal **array)
// {
// 	int i;
	
// 	i = 0;
// 	while (i < 5)
// 	{
// 		(*array)[i] = Dog();
// 		i++;
// 	}
// 	i = 5;
// 	while (i < 10)
// 	{
// 		(*array)[i] = Cat();
// 		i++;
// 	}
// }

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;
	
	Animal *array = new Animal[10];
	// fillInArray(&array);
	int n;
	n = 0;
	while (n < 5)
	{
		array[n] = Dog();
		n++;
	}
	n = 5;
	while (n < 10)
	{
		array[n] = Cat();
		n++;
	}
	delete [] array;
	
	Dog dog1;
	Dog dog2(dog1);
	
	std::cout << "\nfirst dog brain adress: " << dog1.getBrain() << "\n"
	<< "second dog brain adress: " << dog2.getBrain() << "\n\n";
}