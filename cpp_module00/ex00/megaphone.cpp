/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 17:25:46 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/08/01 19:42:19 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int argc, char **argv)
{
	int j;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < argc; ++i)
		{
			j = 0;
			while (argv[i][j])
				std::cout << static_cast<char>(toupper(argv[i][j++]));
		}
		std::cout << std::endl;
	}
	return (0);
}