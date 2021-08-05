/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 22:42:21 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/08/04 21:37:02 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP
# define CONT_NUM 8

# include "Contact.class.hpp"
# include <string>

class Phonebook {

	int _index;
	Contact _contact[CONT_NUM];

	public:

		Phonebook(void);
		~Phonebook(void);
};
#endif