/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 19:01:54 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/09/13 21:08:44 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

void Intern::_initFormTypes(void)
{
	_formTypes[0] = "ShrubberyCreationForm";
	_formTypes[1] = "RobotomyRequestForm";
	_formTypes[2] = "PresidentialPardonForm";
}

void Intern::_initMethodArray(void)
{
	_methods[0] = &Intern::makeShrubberyCreationForm;
	_methods[1] = &Intern::makeRobotomyRequestForm;
	_methods[2] = &Intern::makePresidentialPardonForm;
}

Intern::Intern()
{
	_initFormTypes();
	_initMethodArray();
}

Intern::~Intern()
{
}

Intern::Intern(const Intern &src)
{
	*this = src;
}

Intern &Intern::operator=(const Intern &src)
{
	if (this == &src)
		return(*this);
	return (*this);
}

Form *Intern::makeShrubberyCreationForm(std::string formTarget)
{
	return(new ShrubberyCreationForm(formTarget));
}

Form *Intern::makeRobotomyRequestForm(std::string formTarget)
{
	return(new RobotomyRequestForm(formTarget));
}

Form *Intern::makePresidentialPardonForm(std::string formTarget)
{
	return(new PresidentialPardonForm(formTarget));
}

Form *Intern::makeForm(std::string formName, std::string formTarget)
{
	int i = 0;
	while (i < 3)
	{
		if (formName == _formTypes[i])
			break;
		i++;
	}
	switch (i)
	{
		case 3:
			std::cout << "Incorrect form name was given to the intern\n";
			return (0);
		default:
			return (this->*_methods[i])(formTarget);
	}
	return 0;
}