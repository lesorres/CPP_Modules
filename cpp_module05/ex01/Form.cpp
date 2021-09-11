/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 22:30:17 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/09/11 22:11:15 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
Form::Form(std::string name, int signGrade, int execGrade) : 
	_Name(name), _SignGrade(signGrade), _ExecGrade(execGrade)
{
	_Sign = 0;
	std::cout << *this;
	if (_SignGrade < 1 || _ExecGrade < 1)
		throw Form::GradeTooHighException();
	if (_SignGrade > 150 || _ExecGrade > 150)
		throw Form::GradeTooLowException();
}

Form::~Form()
{
}

Form::Form(Form const &src) : _Name(src._Name), _SignGrade(src._SignGrade), _ExecGrade(src._ExecGrade)
{
	*this = src;
}

Form &Form::operator=(Form const &src)
{
	if (this == &src)
		return(*this);
	this->_Sign = src._Sign;
	return (*this);
}

std::string Form::getName() const
{
	return(_Name);
}

bool Form::getSignStatus() const
{
	return(_Sign);
}

int Form::getSignGrade() const
{
	return(_SignGrade);
}

int Form::getExecGrade() const
{
	return(_SignGrade);
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->getSignGrade())
	{
		std::cout << bureaucrat.getName() << " cannot sign " << this->getName() << " because ";
		throw Bureaucrat::GradeTooLowException();
	}
	else
	{
		_Sign = 1;
		std::cout << bureaucrat.getName() << " signs " << this->getName() << "\n";
	}
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

std::ostream &operator<<(std::ostream &o, const Form &f)
{
	o << f.getName() << ", form sign status: " << f.getSignStatus() 
	<< ", sign grade: " << f.getSignGrade() << ", execution grade: "
	<< f.getExecGrade() << "\n";
	return (o);
}