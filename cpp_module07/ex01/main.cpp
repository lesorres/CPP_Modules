/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 17:02:01 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/09/22 17:40:54 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

template <typename T>

void my_print(T const &param)
{
	std::cout << param << "\n";
}

int main()
{
	int *intArraty = new int[10];
	for (int i = 0; i < 10; ++i)
		intArraty[i] = i;

	char *charArraty = new char[10];
	for (int i = 0; i < 10; ++i)
		charArraty[i] = i + 65;

	iter(intArraty, 10, &my_print);
	std::cout<< "\n";
	iter(charArraty, 10, &my_print);

	delete [] intArraty;
	delete [] charArraty;
	return(0);
}

// class Awesome
// {
// 	public:
// 		Awesome( void ) : _n( 42 ) { return; }
// 		int get( void ) const { return this->_n; }
// 	private:
// 		int _n;
// };

// std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

// template< typename T >
// void print( T const & x ) { std::cout << x << std::endl; return; }

// int main()
// {
// 	int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
// 	Awesome tab2[5];

// 	iter( tab, 5, print );
// 	iter( tab2, 5, print );

// 	return 0;
// }

