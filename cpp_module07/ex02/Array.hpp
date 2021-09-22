/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 17:43:09 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/09/22 23:14:26 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <class T>

class Array
{
	private:
		unsigned int _arrayLen;
		T *_array;
	public:
		Array()
		{
			_arrayLen = 0;
			_array = new T[_arrayLen];
		}
		Array(unsigned int n)
		{
			_arrayLen = n;
			_array = new T[_arrayLen];
		}
		Array(Array const &src)
		{	
			this->_array = new T[0];
			*this = src;
		}
		~Array()
		{
			delete [] _array;
		}
		Array &operator=(Array const &src)
		{
			delete [] this->_array;
			if (this == &src)
				return (*this);
			_arrayLen = src._arrayLen;
			_array = new T[_arrayLen];
			for(size_t i = 0; i < src._arrayLen; ++i)
				_array[i] = src._array[i];
			return(*this);
		}
		T &operator[](size_t i)
		{
			if (i < 0 || i >= _arrayLen)
				throw(std::out_of_range("invalid array index is given"));
			return (_array[i]);
		}
		int size () const
		{
			return(_arrayLen);
		}
		
};
