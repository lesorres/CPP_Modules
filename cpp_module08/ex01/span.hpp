/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 21:04:33 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/09/27 16:19:52 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>

class Span
{
	private:
		unsigned int _N;
		std::vector<int> _vect;
		Span();

	public:
		Span(unsigned int n);
		Span(Span const &src);
		~Span();
		Span &operator=(Span const &src);
		void addNumber(int new_num);
		void fillInSpan(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		unsigned int shortestSpan();
		unsigned int longestSpan();
	
	class vectorIsFull: public std::exception
	{
		virtual const char* what() const throw();
	};

	class vectorIsEmpty: public std::exception
	{
		virtual const char* what() const throw();
	};
};

#endif