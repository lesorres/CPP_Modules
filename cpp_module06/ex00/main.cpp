/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 19:11:22 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/09/18 22:46:22 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>

#define INT 0
#define CHR 1
#define FLT 2
#define DBL 3
#define SPC 4

int check_special_type(std::string const &str)
{
	if (str == "inf" || str == "inff" || str == "+inf" || str == "+inff"
	|| str == "-inf" || str == "-inff" || str == "nan" || str == "nanf")
		return(1);
	else
		return(0);
}

int check_literal_type(std::string const &str)
{
	int i = 0;
	if (check_special_type (str))
		return (SPC);
	if (str[1] == '\0' && ((str[0] >= 0 && str[0] < 48)
	|| (str[0] > 57 && str[0] <= 127)))
		return (CHR);
	if (str[i] == '-')
		i++;
	while (str[i] > 47 && str[i] < 58)
		i++;
	if (str[i] == '\0')
		return (INT);
	if (str[i] == '.')
		i++;
	while (str[i] > 47 && str[i] < 58)
		i++;
	if (str[i] == 'f' && str[i + 1] == '\0')
		return(FLT);
	if (str[i] == '\0')
		return(DBL);
	return (-1);
}

void print_float(float f)
{
	if (f != static_cast<int>(f))
		std::cout << "float: " << f << "f\n";
	else
		std::cout << "float: " << f << ".0f\n";
}

void print_double(double d)
{
	if (d != static_cast<int>(d))
		std::cout << "double: " << d << "\n";
	else
		std::cout << "double: " << d << ".0\n";
}

void from_int(std::string const &str)
{
	long long int i;
	std::stringstream ss;
	ss << str;
	ss >> i;
	int i_min = std::numeric_limits<int>::min();
	int i_max = std::numeric_limits<int>::max();
	
	float f = static_cast<float> (i);
	double d = static_cast<double> (i);
	
	if (i < 0 || i > 127)
		std::cout << "char: impossible\n";
	else if (i >= 0 && i < 32)
		std::cout << "char: Non displayable\n";
	else
	{
		char c = static_cast<char> (i);
		std::cout << "char: '" << c << "'\n";
	}
	if (i < i_min || i > i_max)
		std::cout << "int: impossible\n";
	else
		std::cout << "int: " << i << "\n";
	print_float(f);
	print_double(d);
}

void from_char(std::string const &str)
{
	char c = str[0];
	int i = static_cast<int> (c);
	float f = static_cast<float> (c);
	double d = static_cast<double> (c);
	
	if (i >= 0 && i < 32)
		std::cout << "char: Non displayable\n";
	else
		std::cout << "char: '" << c << "'\n";
	std::cout << "int: " << i << "\n";
	print_float(f);
	print_double(d);
}

void from_float(std::string const &str)
{
	long double i;
	std::stringstream ss;
	ss << str;
	ss >> i;
	int i_min = std::numeric_limits<int>::min();
	int i_max = std::numeric_limits<int>::max();
	int f_min = std::numeric_limits<float>::min();
	int f_max = std::numeric_limits<float>::max();
	int d_min = std::numeric_limits<double>::min();
	int d_max = std::numeric_limits<double>::max();

	if (i < 0 || i > 127)
		std::cout << "char: impossible\n";
	else if (i >= 0 && i < 32)
		std::cout << "char: Non displayable\n";
	else
	{
		char c = static_cast<char> (i);
		std::cout << "char: '" << c << "'\n";
	}
	if (i < i_min || i > i_max)
		std::cout << "int: impossible\n";
	else
		std::cout << "int: " << i << "\n";
	if (i > f_max || i < f_min)
	{
		float f = static_cast<float> (i);
		print_float(f);
	}
	else
		std::cout << "float: impossible\n";
	if (i > d_max || i < d_min)
	{
		double d = static_cast<double> (i);
		print_double(d);
	}
	else
		std::cout << "double: impossible\n";
}

void	from_special_types(std::string const &str)
{
	std::cout << "char: impossible\n";
	std::cout << "int: impossible\n";
	if (str == "inf" || str == "+inf" || str == "-inf" || str == "nan")
	{
		std::cout << "float: " << str << "f\n";
		std::cout << "double: " << str << "\n";
	}
	else
	{
		std::cout << "float: " << str << "\n";
		std::cout << "double: " << str.substr(0, str.length() - 1) << "\n";
	}
}

void print_literal(std::string const &str, int type)
{
	switch (type)
	{
		case INT:
			from_int(str);
			break;
		case CHR:
			from_char(str);
			break;
		case FLT:
			from_float(str.substr(0, str.length() - 1)); //отличается только передачей параметра
			break;
		case DBL:
			from_float(str);
			break;
		case SPC:
			from_special_types(str);
			break;
		default:
			std::cout << "error: invalid string literal was given\n";
			break;
	}
}

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