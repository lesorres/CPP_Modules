/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 22:06:27 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/08/30 23:07:36 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <iomanip>
#include <cmath>

int main( void )
{
	std::cout << "\ndefault tests:\n\n";
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;

	/********** my tests **********/
	std::cout << "\nmy tests:\n\n";
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl << std::endl;

	std::cout << "min (a, b): " << Fixed::min( a, b ) << std::endl;
	Fixed const d( Fixed( 5.25f ) / Fixed( 2 ) );
	std::cout << "5.25 / 2 = " << d << std::endl;
	Fixed const z( Fixed( 5.25f ) + Fixed( 2 ) );
	std::cout << "5.25 + 2 = " << z << std::endl;
	Fixed const x( Fixed( 5 ) - Fixed( 2.5f ) );
	std::cout << "5 - 2.5 = " << x << std::endl;
	std::cout << "a == b = " << ((a == b) ? "true" : "false") << std::endl;
	std::cout << "a != b = " << ((a != b) ? "true" : "false") << std::endl;
	std::cout << "a >= b = " << ((a >= b) ? "true" : "false") << std::endl;
	std::cout << "a <= b = " << ((a <= b) ? "true" : "false") << std::endl;
	std::cout << "a-- = " << (a--) << std::endl;
	std::cout << "a (decremented after previous operation) = " << a << std::endl;
	std::cout << "--a = " << (--a) << std::endl;

	return 0;
}