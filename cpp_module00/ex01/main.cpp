/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 21:37:08 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/08/06 00:22:01 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"
#include "Contact.class.hpp"

void print_header()
{
	std::cout << "┌-----------------------------------------------------┐" << std::endl;
	std::cout << "|                                                     |" << std::endl;
	std::cout << "|                      PHONEBOOK                      |" << std::endl;
	std::cout << "|                                                     |" << std::endl;
	std::cout << "| Type ADD:                                           |" << std::endl;
	std::cout << "| the program will prompt to input a new contact’s    |" << std::endl;
	std::cout << "| info, one field at a time, until every field is     |" << std::endl;
	std::cout << "| accounted for.                                      |" << std::endl;
	std::cout << "|                                                     |" << std::endl;
	std::cout << "| Type SEARCH:                                        |" << std::endl;
	std::cout << "| the program will display a list of the available    |" << std::endl;
	std::cout << "| non-empty contacts.                                 |" << std::endl;
	std::cout << "|                                                     |" << std::endl;
	std::cout << "| Type EXIT:                                          |" << std::endl;
	std::cout << "| the program quits and the contacts are lost forever |" << std::endl;
	std::cout << "|                                                     |" << std::endl;
	std::cout << "└-----------------------------------------------------┘" << std::endl;
}

int	main() {
	
	Phonebook a;
	Contact b;
	std::string line;

	line = "";
	print_header();
	while (line != "EXIT")
	{
		std::cout << "insert a command: ";
		std::getline(std::cin, line);
		if (line == "ADD")
		{
			std::cout << "\ninsert first name: ";
			std::getline(std::cin, line);
			b.set_first_name(line);

			std::cout << "insert last name: ";
			std::getline(std::cin, line);
			b.set_last_name(line);

			std::cout << "insert nickname: ";
			std::getline(std::cin, line);
			b.set_nickname(line);

			std::cout << "insert phone number: ";
			std::getline(std::cin, line);
			b.set_phone_number(line);

			std::cout << "insert darkest secret: ";
			std::getline(std::cin, line);
			b.set_darkest_secret(line);
			std::cout << std::endl;
		}
		else if (line == "SEARCH")
			std::cout << "search entered\n";
		else if (line != "EXIT")
			std::cout << "wrong command" << std::endl;;
	}
	// b.fill_in_firstname("");
	std::cout << "You exited the programm. Contacts not saved.\n";
	return (0);
}