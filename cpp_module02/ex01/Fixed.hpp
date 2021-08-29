/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 22:03:02 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/08/28 21:37:45 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int _fpVal;
		static const int _numOfFb;

	public:
		Fixed();
		Fixed(Fixed const &src);
		Fixed(int i);
		Fixed (float f);
		~Fixed();

		Fixed &operator=(Fixed const &prm);

		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
};

std::ostream &operator<<(std::ostream &o, Fixed const &prm);

#endif