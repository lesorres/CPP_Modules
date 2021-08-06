/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 22:42:21 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/08/06 23:56:58 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP
# define CONT_NUM 8

# include "Contact.class.hpp"
# include <string>

class Phonebook {

	int _index;
	int _full;
	Contact _contact[CONT_NUM];

	public:
		void init_contacts();
		void add_new_contact();
		void print_contacts();
		int get_index();
		void set_full();
		int get_full();
		Phonebook(void);
		~Phonebook(void);
};
#endif