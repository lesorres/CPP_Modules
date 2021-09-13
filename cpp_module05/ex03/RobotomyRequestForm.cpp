/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 14:35:38 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/09/12 22:15:32 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target)
	: Form ("RobotomyRequestForm", 72, 45)
{
	_Target = target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : Form(src)
{
	this->_Target = src._Target;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &src)
{
	if (this == &src)
		return(*this);
	Form::operator=(src);
	this->_Target = src._Target;
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (this->getSignStatus() == 0)
		throw Form::FormNotSignedException();
	else if (executor.getGrade() > this->getExecGrade())
		throw Form::GradeTooLowException();
	else
		std::cout << "...  some drilling noises ...\n" << _Target
		<< " has been robotomized successfully 50% of the time\n";
}

std::string		RobotomyRequestForm::getTarget() const
{
	return(_Target);
}