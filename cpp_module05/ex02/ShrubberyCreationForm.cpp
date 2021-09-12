/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 22:35:23 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/09/12 22:16:00 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: Form ("ShrubberyCreationForm", 145, 137)
{
	_Target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : Form(src)
{
	this->_Target = src._Target;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src)
{
	if (this == &src)
		return(*this);
	Form::operator=(src);
	this->_Target = src._Target;
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (this->getSignStatus() == 0)
		throw Form::FormNotSignedException();
	else if (executor.getGrade() > this->getExecGrade())
		throw Form::GradeTooLowException();
	std::ofstream out (_Target + "_shrubbery");
	if (out.is_open())
	{
		out << 
		"    ###    \n"
		"   #o###   \n"
		" #####o### \n"
		"#o###|#/###\n"
		" ####|/#o# \n"
		"  # }|{  # \n"
		"    }|{    \n";
		out.close();
	}
	else
		throw Form::FilestreamException();
}

std::string		ShrubberyCreationForm::getTarget() const
{
	return(_Target);
}