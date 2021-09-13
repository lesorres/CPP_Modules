/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 18:50:30 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/09/13 21:08:58 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	private:
		std::string _formTypes[3];
		typedef Form * (Intern:: * pType)(std::string);
		pType _methods[3];
		void _initFormTypes(void);
		void _initMethodArray(void);

		Form *makeShrubberyCreationForm(std::string formTarget);
		Form *makeRobotomyRequestForm(std::string formTarget);
		Form *makePresidentialPardonForm(std::string formTarget);

	public:
		Intern();
		~Intern();
		Intern(const Intern &src);
		Intern &operator=(const Intern &src);

		Form *makeForm(std::string formName, std::string formTarget);
};

#endif