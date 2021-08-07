/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 20:39:01 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/08/07 22:14:32 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <string>
# include <iostream>

#ifndef COLOR

# define COLOR
# define F_NONE		"\033[37m"
# define RED		"\033[31m"
# define GREEN		"\033[32m"
# define CYANE		"\033[36m"
# define F_BOLD		"\033[1m"
# define F_ORANGE	"\033[38m"
# define F_YELLOW	"\033[0;33m"
# define F_BLUE		"\033[34m" 

// # define NCLR        "\033[0m"
// # define BLACK       "\033[0;30m"
// # define WHITE       "\033[0;37m"
// # define YELLOW      "\033[0;33m"
// # define RED         "\033[0;31m"
// # define GREEN       "\033[0;32m"
// # define CYAN        "\033[0;36m"
// # define BLUE        "\033[0;34m"
// # define PURPLE      "\033[0;35m"
// # define B_GRAY      "\033[1;30m"
// # define B_WHITE     "\033[1;37m"
// # define B_RED       "\033[1;31m"
// # define B_YELLOW    "\033[1;33m"
// # define B_GREEN     "\033[1;32m"
// # define B_CYAN      "\033[1;36m"
// # define B_BLUE      "\033[1;34m"
// # define B_PURPLE    "\033[1;35m
#endif

class Contact {

	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _phone_number;
	std::string _darkest_secret;

	public:
		void set_first_name(std::string str);
		void set_last_name(std::string str);
		void set_nickname(std::string str);
		void set_phone_number(std::string str);
		void set_darkest_secret(std::string str);
		std::string get_first_name();
		std::string get_last_name();
		std::string get_nickname();
		std::string get_phone_number();
		std::string get_darkest_secret();
		Contact(void);
		~Contact(void);
};

#endif