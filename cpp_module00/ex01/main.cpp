/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 21:37:08 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/08/08 20:45:19 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"
#include "Phonebook.class.hpp"
#include <cstring>

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
	std::string line;

	line = "";
	print_header();
	while (line != "EXIT")
	{
		std::cout << std::endl << "insert a command: ";
		std::getline(std::cin, line);
		if (line == "ADD")
		{
			std::cout << "contact # " << book.get_index() + 1 << std::endl;
			book.add_new_contact();
		}
		else if (line == "SEARCH")
		{
			if (!book.print_contacts_table())
			{
				while (1)
				{
					std::cout << "insert contact #: ";
					std::getline(std::cin, line);
					if (std::strchr("12345678",line[0]) && line.length() == 1)
					{
						std::cout << std::endl;
						book.print_index_cont((int)(line[0] - 49));
						break;
					}
					else
						std::cout << "insert index from 1 to 8" << std::endl;
				}
			}
		}
		else if (line != "EXIT")
			std::cout << "please enter one of the following commands: ADD, SEARCH or EXIT" << std::endl;
	}
	std::cout << "You exited the programm. Contacts wasn't saved.\n";
	return (0);
}