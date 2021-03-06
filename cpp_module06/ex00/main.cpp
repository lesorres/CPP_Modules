/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 19:11:22 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/09/19 15:45:21 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "converter.hpp"

int main (int argc, char const **argv)
{
	int type = 0;
	if (argc != 2)
	{
		std::cout << "error: invalid number of arguments is given\n";
		return (0);
	}
	type = check_literal_type(argv[1]);
	print_literal(argv[1], type);
	return (0);
}