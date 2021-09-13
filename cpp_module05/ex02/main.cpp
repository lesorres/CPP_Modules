/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 18:51:45 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/09/13 20:31:20 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"

void testEachBureaucrat(Bureaucrat &bureaucrat, Form& form)
{
	bureaucrat.executeForm(form);
	bureaucrat.signForm(form);
	bureaucrat.executeForm(form);

	std::cout << "\n";
}

int main ()
{
	ShrubberyCreationForm shrubbery("Home");
	RobotomyRequestForm robotomy("Heart of Gold Spaceship");
	PresidentialPardonForm presidential("Trillian");
	std::cout << "\n";

	Bureaucrat Bob("Bob", 2);
	Bureaucrat Tim("Tim", 67);
	Bureaucrat Rob("Rob", 140);
	std::cout << "\n";

	std::cout << "--- Test with shrubbery form ---\n\n";
	testEachBureaucrat(Bob, shrubbery);
	testEachBureaucrat(Tim, shrubbery);
	testEachBureaucrat(Rob, shrubbery);
	std::cout << "\n";

	std::cout << "--- Test with robotomy form ---\n\n";
	testEachBureaucrat(Bob, robotomy);
	testEachBureaucrat(Tim, robotomy);
	testEachBureaucrat(Rob, robotomy);
	std::cout << "\n";

	std::cout << "--- Test with presidential form ---\n\n";
	testEachBureaucrat(Bob, presidential);
	testEachBureaucrat(Tim, presidential);
	testEachBureaucrat(Rob, presidential);
}