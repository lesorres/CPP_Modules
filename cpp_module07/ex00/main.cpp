/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 23:00:21 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/09/22 17:41:28 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>

// class Awesome
// {
// 	public:
// 		Awesome( int n ) : _n( n ) {}
// 		bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
// 		bool operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); }
// 		bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
// 		bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
// 		bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
// 		bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
// 		int getN() const
// 		{
// 			return(_n);
// 		}
// 		private:
// 		int _n;
// };
// std::ostream & operator<<(std::ostream &out, const Awesome &awesome)
// {
// 	out << awesome.getN();
// 	return (out);
// }

int main( void )
{
	int a = 2;
	int b = 3;

	// Awesome a(7);
	// Awesome b(9);

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}