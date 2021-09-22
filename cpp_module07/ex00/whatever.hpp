/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 23:01:15 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/09/22 16:37:26 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T>

void swap(T &a, T &b)
{
	T tmp = a;

	a = b;
	b = tmp;
}

template <typename T>

T& min(T &a, T &b)
{
	if (a < b)
		return (a);
	else if (a > b)
		return (b);
	else 
		return (b);
}

template <typename T>

T& max(T &a, T &b)
{
	if (a > b)
		return (a);
	else if (a < b)
		return (b);
	else 
		return (b);
}

#endif