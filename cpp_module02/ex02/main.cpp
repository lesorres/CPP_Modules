/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 22:06:27 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/08/29 22:39:22 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <iomanip>

int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	// std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	// std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	// std::cout << Fixed::max( a, b ) << std::endl;

	std::cout << std::setprecision(4);
	Fixed const d( Fixed( 5.05f ) / Fixed( 2 ) );
	std::cout << d << std::endl;
	return 0;
}