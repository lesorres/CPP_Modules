/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 21:35:50 by kmeeseek          #+#    #+#             */
/*   Updated: 2021/08/17 20:05:02 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <cctype>
#define FILE1 "file1.txt"
#define FILE2 "file5.txt"

std::string proccessStr(std::string str, std::string s1, std::string s2)
{
	std::string res;
	std::stringstream ss;
	size_t position = str.find(s1);;

	if (position == std::string::npos)
		return (str);
	ss << str.substr(0, position)\
	<< s2 << str.substr(position + s1.length(), std::string::npos);
	res = ss.str();
	return (proccessStr(res, s1, s2));
}

const std::string get_otput_file_name(std::string file1)
{
	std::string::iterator p = file1.begin();
	while (p != file1.end())
	{
		*p = toupper(*p);
		p++;
	}
	file1 = file1.append(".replace");
	return (file1);
}

int replace(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << " error: please provide filename and two strings" << std::endl;
		return(1);
	}

	const std::string file1 = argv[1];
	const std::string s1 = argv[2];
	const std::string s2 = argv[3];
	const std::string file2 = get_otput_file_name(file1);

	std::ifstream inf(file1);
	if (!inf)
	{
		std::cerr << file1 << " couldn't be opened for reading" << std::endl;
		return (1);
	}
	std::ofstream outf(file2);
	if (!outf)
	{
		std::cerr << file2 << "couldn't be opened for writing" << std::endl;
		return (1);
	}
	for (std::string str; std::getline(inf, str);)
		outf << proccessStr(str, s1, s2) << std::endl;
	return (0);
}

int main (int argc, char **argv)
{
	return (replace(argc, argv));
}