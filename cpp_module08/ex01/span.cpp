/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 17:15:11 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/09/27 16:36:17 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <algorithm>
#include <limits>
#include <iostream>

Span::Span()
{
}

Span::Span(unsigned int n)
{
	_N = n;
}

Span::~Span()
{
}

Span::Span(Span const &src)
{
	*this = src;
}

Span &Span::operator=(Span const &src)
{
	if (this == &src)
		return (*this);
	_N = src._N;
	_vect = src._vect;
	return (*this);
}

void Span::addNumber(int new_num)
{
	if (_vect.size() >= _N)
		throw Span::vectorIsFull();
	_vect.push_back(new_num);
}

void Span::fillInSpan(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	this->_vect.insert(_vect.begin(), begin, end);
}

unsigned int Span::longestSpan()
{
	if (_vect.size() < 2)
		throw vectorIsEmpty();

	std::vector<int>::iterator max_it;
	std::vector<int>::iterator min_it;

	max_it = std::max_element(_vect.begin(), _vect.end());
	min_it = std::min_element(_vect.begin(), _vect.end());

	return (static_cast<unsigned int>(*max_it - *min_it));
}

unsigned int Span::shortestSpan()
{
	unsigned int ret;
	unsigned int tmp;

	if (_vect.size() < 2)
		throw vectorIsEmpty();
	
	ret = std::numeric_limits<unsigned int>::max();

	std::sort(_vect.begin(), _vect.end());
	for (unsigned int i = 0; i < (_N - 1); ++i)
	{
		tmp = _vect[i + 1] - _vect[i];
		if (tmp < ret)
			ret = tmp;
	}
	return (ret);
}

const char* Span::vectorIsFull::what() const throw()
{
	return ("there is no space left in the vector for new number addition");
}

const char* Span::vectorIsEmpty::what() const throw()
{
	return ("there is no elements in the vector or there is only one element");
}