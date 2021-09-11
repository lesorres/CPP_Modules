/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 18:51:40 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/09/11 21:23:46 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Form;
class Bureaucrat
{
	private:
		const std::string _Name;
		int _Grade;

	public:
		Bureaucrat(std::string name, int grade);
		~Bureaucrat();

		Bureaucrat(Bureaucrat const &src);
		Bureaucrat &operator=(Bureaucrat const &src);

		std::string getName() const;
		int getGrade() const;

		void incGrade();
		void decGrade();

		void signForm(Form &form);

		class GradeTooLowException : public std::exception
		{
			public:
				const char * what () const throw ();
		};
		class GradeTooHighException : public std::exception
		{
			public:
				const char * what () const throw ();
		};
};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &b);

#endif