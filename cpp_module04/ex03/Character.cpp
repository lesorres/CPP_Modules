/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 22:48:12 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/09/08 23:35:05 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name)
{
	_Name = name;
	for (int i = 0; i < 4; ++i)
		this->_Array[i] = 0;
}
Character::Character(Character const &src)
{
	*this = src;
}
Character::~Character()
{
	for (int i = 0; i < 4; i++)
		if (this->_Array[i])
			delete this->_Array[i];
}
std::string const & Character::getName() const
{
	return (_Name);
}
Character &Character::operator=(Character const &src)
{
	if (this == &src)
		return(*this);
	this->_Name = src.getName();
	for (int i = 0; i < 4; ++i)
		this->_Array[i] = src._Array[i];
	return (*this);
}
void Character::equip(AMateria* m)
{
	int i = 0;
	while (i < 4 && this->_Array[i])
		i++;
	if (i < 4)
		this->_Array[i] = m;
}
void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 && this->_Array[idx])
		this->_Array[idx] = 0;
}
void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && this->_Array[idx])
		this->_Array[idx]->use(target);
}
