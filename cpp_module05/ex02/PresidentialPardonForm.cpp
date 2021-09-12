/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 14:37:08 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/09/12 22:15:16 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target)
	: Form ("PresidentialPardonForm", 25, 5)
{
	_Target = target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : Form(src)
{
	this->_Target = src._Target;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &src)
{
	if (this == &src)
		return(*this);
	Form::operator=(src);
	this->_Target = src._Target;
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
		if (this->getSignStatus() == 0)
		throw Form::FormNotSignedException();
	else if (executor.getGrade() > this->getExecGrade())
		throw Form::GradeTooLowException();
	else
		std::cout << _Target << " has been pardoned by Zafod Beeblebrox\n";
}

std::string		PresidentialPardonForm::getTarget() const
{
	return(_Target);
}