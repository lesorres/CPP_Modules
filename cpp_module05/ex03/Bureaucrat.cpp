/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 18:51:42 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/09/12 20:46:39 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _Name(name), _Grade(grade)
{
	std::cout << *this;
	if (_Grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (_Grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) : _Name(src._Name)
{
	*this = src;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &src)
{
	if (this == &src)
		return(*this);
	this->_Grade = src._Grade;
	return (*this);
}

std::string Bureaucrat::getName() const
{
	return(_Name);
}

int Bureaucrat::getGrade() const
{
	return(_Grade);
	
}

void Bureaucrat::incGrade()
{
	_Grade--;
	std::cout << *this;
	if (_Grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decGrade()
{
	_Grade++;
	std::cout << *this;
	if (_Grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::signForm(Form &form)
{
	if (form.getSignStatus())
		std::cout << form.getName() << " is already signed\n";
	else
	{
		try
		{
			form.beSigned(*this);
			std::cout << this->getName() << " signs " << form.getName() << "\n";
		}
		catch(const std::exception& e)
		{
			std::cout << this->getName() << " cannot sign " << form.getName() << " because "
			 << e.what() << '\n';
			// std::cout << e.what() << '\n';
		}
	}
}

void Bureaucrat::executeForm(Form const & form)
{
	try
	{
		form.execute(*this);
		std::cout << _Name << " executes " << form.getName() << "\n";
	}
	catch(const std::exception& e)
	{
		std::cout << form.getName() << " wasn't executed by " << _Name
		<< " because " << e.what() << '\n';
	}
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Bureaucrat's grade is too high");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Bureaucrat's grade is too low");
}

std::ostream &operator<<(std::ostream &o, const Bureaucrat &b)
{
	o << b.getName() << ", bureaucrat grade " << b.getGrade() << "\n";
	return (o);
}