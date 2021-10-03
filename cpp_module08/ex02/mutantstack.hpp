/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 19:53:02 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/09/27 17:09:19 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <deque>

template<typename T>

class MutantStack : public std::stack<T>
{
	public:
		MutantStack() : std::stack<T>() {}
		virtual ~MutantStack(){};
		MutantStack(MutantStack const &src): std::stack<T>(src) {}
		MutantStack &operator=(MutantStack<T> const &src)
		{
			if (this == &src)
				return (*this);
			this->c = src.c;
			return (*this);
		}
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin()
		{
			return (this->c.begin());
		}
		iterator end()
		{
			return (this->c.end());
		}
};

#endif