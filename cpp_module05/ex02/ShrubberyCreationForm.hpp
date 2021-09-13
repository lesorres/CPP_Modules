/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 22:33:42 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/09/13 20:49:26 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	private:
		std::string _Target;
		ShrubberyCreationForm();
	public:
		ShrubberyCreationForm(std::string target);
		virtual ~ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm &src);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &src);

		virtual void	execute(Bureaucrat const & executor) const;
		std::string		getTarget() const;
};

#endif