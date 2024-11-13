/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chorst <chorst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 10:39:58 by chorst            #+#    #+#             */
/*   Updated: 2024/10/17 17:17:04 by chorst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int main (int argc, char **argv)
{
	// Colour defines:
	const std::string red = "\033[31m";
	const std::string yellow = "\033[33m";
	const std::string reset = "\033[0m";

	// Input checking and print infos
	(void)argv;
	if (argc != 4)
	{
		std::cout << red << "Wrong Input. The following would be right:" << reset << std::endl;
		std::cerr << yellow << "./program <filename> <s1> <s2>" << reset << std::endl;
		return 1;
	}
	std::string filename = argv[1];
	std::string new_filename;
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::cout << std::endl;
	std::cout << yellow << "Filename:	" << reset << filename << std::endl;
	std::cout << yellow << "s1:		" << reset << s1 << std::endl;
	std::cout << yellow << "s2:		" << reset << s2 << std::endl;
	std::cout << std::endl;

	std::ifstream input_file(filename);
	std::string content;

	size_t position = 0;
	int i = 0;

	// Input parsing
	if (input_file.is_open() != 0)
	{
		std::string filename_output = filename + ".replace";
		std::ofstream new_file(filename_output);

		std::cout << yellow << "Content of: " << filename << reset << std::endl;
		while (getline(input_file, content))
		{
			std::cout << content << std::endl;
			position = content.find(s1);
			while (position != std::string::npos)
			{
				std::string before = content.substr(0, position);
				std::string after = content.substr(position + s1.length());
				content = before + s2 + after;
				position = content.find(s1);
				i++;
			}
			new_file << content << std::endl;
		}
		if (i != 0)
		{
		std::cout << std::endl;
		std::cout << yellow << "New content of: " << filename_output << reset << std::endl;
		std::ifstream new_file_read(filename_output);
		std::string new_content;

		if (new_file_read.is_open())
		{
			while (getline(new_file_read, new_content))
				std::cout << new_content << std::endl;
			new_file_read.close();
		}
		else
			std::cerr << red << "Error: " << reset << "Could not open the new file for reading." << std::endl;
		}
		else
		{
			std::cout << std::endl;
			std::cout << red << "Error: " << reset << "Could not find s1(\"" << s1 << "\") inside of: "<< yellow << filename << reset << std::endl;
		}
		input_file.close();
	}
	else
		std::cerr << red << "File could not be opened" << reset << std::endl;
	// Input changing
	return 0;
}
