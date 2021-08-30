/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 22:03:02 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/08/30 21:51:53 by kmeeseek         ###   ########.fr       */
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

		static Fixed& min( Fixed& a, Fixed& b );
		static Fixed& max( Fixed& a, Fixed& b );
		static const Fixed& min( const Fixed& a, const Fixed& b );
		static const Fixed& max( const Fixed& a, const Fixed& b );

		bool operator>(Fixed const &mun) const;
		bool operator<(Fixed const &num) const;
		bool operator>=(Fixed const &num) const;
		bool operator<=(Fixed const &num) const;
		bool operator==(Fixed const &num) const;
		bool operator!=(Fixed const &num) const;

		Fixed operator+(Fixed const &num);
		Fixed operator-(Fixed const &num);
		Fixed operator*(Fixed const &num);
		Fixed operator/(Fixed const &num);

		Fixed operator++(int);		// member postfix x++
		Fixed operator++();			// member prefix ++x
		Fixed operator--(int);		// member postfix x--
		Fixed operator--();			// member prefix --x
};
std::ostream &operator<<(std::ostream &o, Fixed const &prm);


#endif