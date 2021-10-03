/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 18:42:41 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/09/26 16:56:45 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <exception>


class my_exeption : public std::exception
{
	virtual const char* what() const throw()
	{
		return ("could not find the given parameter in the container");
	}
};

template <typename T>

typename T::iterator easyfind (T &int_container, int x)
{
	typename T::iterator it;
	it = std::find(int_container.begin(), int_container.end(), x);
	if (it == int_container.end())
		throw my_exeption();
	return(it);
}

#endif