/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 21:37:08 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/08/06 23:58:02 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"
#include "Phonebook.class.hpp"

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
	
	Phonebook book;
	// Contact b;
	std::string line;

	line = "";
	print_header();
	while (line != "EXIT")
	{
		std::cout << "insert a command: ";
		std::getline(std::cin, line);
		if (line == "ADD")
		{
			// std::cout << "\ninsert first name: ";
			// std::getline(std::cin, line);
			// b.set_first_name(line);

			// std::cout << "insert last name: ";
			// std::getline(std::cin, line);
			// b.set_last_name(line);

			// std::cout << "insert nickname: ";
			// std::getline(std::cin, line);
			// b.set_nickname(line);

			// std::cout << "insert phone number: ";
			// std::getline(std::cin, line);
			// b.set_phone_number(line);

			// std::cout << "insert darkest secret: ";
			// std::getline(std::cin, line);
			// b.set_darkest_secret(line);
			// std::cout << "contact for " << b.get_first_name() << " "<< b.get_last_name() << " was added" << std::endl;
			// std::cout << std::endl;
			std::cout << "contact # " << book.get_index() + 1 << std::endl;
			book.add_new_contact();
		}
		else if (line == "SEARCH")
			book.print_contacts();
		else if (line != "EXIT")
			std::cout << "please enter one of the following commands: ADD, SEARCH or EXIT" << std::endl;
	}
	// b.fill_in_firstname("");
	std::cout << "You exited the programm. Contacts not saved.\n";
	return (0);
}