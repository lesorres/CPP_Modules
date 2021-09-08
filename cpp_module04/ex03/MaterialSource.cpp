/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MaterialSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 23:00:30 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/09/08 20:18:49 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; ++i)
		this->_Array[i] = 0;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; ++i)
	{
		if (this->_Array[i])
			delete this->_Array[i];
	}
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
	*this = src;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &src)
{
	if (this == &src)
		return (*this);
	for (int i = 0; i < 4; ++i)
	{
		if (src._Array[i])
			this->_Array[i] = src._Array[i];
	}
	return(*this);
}

void MateriaSource::learnMateria(AMateria* materia)
{
	int i = 0;
	while (i < 4 && this->_Array[i])
		i++;
	if (i < 4)
		this->_Array[i] = materia;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; ++i)
	{
		if (this->_Array[i])
		{
			if (this->_Array[i]->getType() == type)
				return(this->_Array[i]->clone());
		}
	}
	return(0);
}