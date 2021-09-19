/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 18:57:11 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/09/16 19:05:50 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string>
# include <iostream>

class Karen
{
private:

	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
	std::string _input[4];
	typedef void (Karen:: * PType)(void);
	PType methods[4];
	void init_input_array(void);
	void init_method_array(void);

public:

	void complain(std::string level);
	Karen(void);
	~Karen(void);
};
