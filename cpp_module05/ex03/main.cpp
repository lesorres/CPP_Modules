/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 18:51:45 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/09/13 21:22:05 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"
#include "Intern.hpp"

void my_delete(Form *form)
{
	if (form)
		delete form;
}

int main ()
{
	Intern Tim;
	Bureaucrat Bob("Bob", 1);
	std::cout << "\n";

	Form * shrubbery = Tim.makeForm("ShrubberyCreationForm", "Home");
	Form * robotomy = Tim.makeForm("RobotomyRequestForm", "Heart of Gold Spaceship");
	Form * presidential = Tim.makeForm("PresidentialPardonForm", "Trillian");
	Form * rubbish = Tim.makeForm("BlaBlaBla", "Trillian");
	std::cout << "\n";
	
	Bob.signForm(*shrubbery);
	Bob.executeForm(*shrubbery);
	
	my_delete(shrubbery);
	my_delete(robotomy);
	my_delete(presidential);
	my_delete(rubbish);
}