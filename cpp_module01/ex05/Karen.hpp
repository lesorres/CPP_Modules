/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 18:57:11 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/08/18 19:54:23 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string>
# include <iostream>

// typedef struct s_level
// {
// 	std::string level;
// 	void (*Karen::method)(void);
// }	t_level;


class Karen
{
private:


	// t_level _levels[4];
	// void init_levels(void);
	// void (Karen::*methods[5])(std::string const &target) = {&FragTrap::meleeAttack, &FragTrap::rangedAttack, &FragTrap::magicAttack, &FragTrap::sneakAttack, &FragTrap::panicAttack}; 

public:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
	
	std::string _input[4];
	//typedef void (*method)(void);
	//method methods[4];// = {&debug, &info, &warning, &error};
	typedef void (Karen:: * PType)(void);
	PType methods[4];

	//void (Karen::*func[2])(void) = { &Karen::debug, &Karen::info };

	void init_input_array(void);
	void init_method_array(void);

	void complain(std::string level);
	Karen(void);
	~Karen(void);
};
