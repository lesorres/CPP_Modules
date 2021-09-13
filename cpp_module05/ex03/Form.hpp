/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 22:30:14 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/09/12 22:06:01 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
	private:
		const std::string _Name;
		bool _Sign;
		const int _SignGrade;
		const int _ExecGrade;
		Form();

	public:
		Form(std::string name, int signGrade, int execGrade);
		virtual ~Form();

		Form(Form const &src);
		Form &operator=(Form const &src);

		std::string 	getName() const;
		bool			getSignStatus() const;
		int				getSignGrade() const;
		int				getExecGrade() const;
		void			beSigned(Bureaucrat &bureaucrat);
		virtual void	execute(Bureaucrat const & executor) const = 0;

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
		class FormNotSignedException : public std::exception
		{
			public:
				const char * what () const throw ();
		};
		class FilestreamException : public std::exception
		{
			public:
				const char * what () const throw ();
		};
};

std::ostream &operator<<(std::ostream &o, Form const &f);

#endif