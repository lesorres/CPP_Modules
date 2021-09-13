/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 14:33:43 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/09/13 20:48:23 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private:
		std::string _Target;
		RobotomyRequestForm();
	public:
		RobotomyRequestForm(std::string target);
		virtual ~RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm &src);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &src);

		virtual void	execute(Bureaucrat const & executor) const;
		std::string		getTarget() const;
};

#endif