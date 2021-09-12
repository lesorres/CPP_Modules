/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 14:34:14 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/09/12 22:15:12 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private:
		std::string _Target;
		PresidentialPardonForm();
	public:
		PresidentialPardonForm(std::string target);
		virtual ~PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm &src);
		PresidentialPardonForm &operator=(const PresidentialPardonForm &src);

		virtual void	execute(Bureaucrat const & executor) const;
		std::string		getTarget() const;
};