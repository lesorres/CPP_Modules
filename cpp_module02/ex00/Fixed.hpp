/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 22:03:02 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/08/27 19:22:40 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Fixed
{
	private:
		int _fpVal;
		static const int _numOfFb;

	public:
		Fixed();
		Fixed(Fixed const &src);
		~Fixed();

		Fixed &operator=(Fixed const &prm);

		int getRawBits( void ) const; //returns the raw value of the fixed point value
		void setRawBits( int const raw ); //sets the raw value of the fixed point value
};