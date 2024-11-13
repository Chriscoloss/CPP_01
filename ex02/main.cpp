/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chorst <chorst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 11:44:56 by chorst            #+#    #+#             */
/*   Updated: 2024/10/16 12:05:53 by chorst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";

	// Declaring Pointer and Referenz from str
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	// Printing memory Adresses
	std::cout << "\033[33mMemory Adress of str:\033[0m			" << &str << std::endl;
	std::cout << "\033[33mMemory Adress of stringPTR:\033[0m		" << stringPTR << std::endl;
	std::cout << "\033[33mMemory Adress of stringREF:\033[0m		" << &stringREF << std::endl;

	// Printing values
	std::cout << "\033[33mValue of str:\033[0m				" << str << std::endl;
	std::cout << "\033[33mValue pointed to by stringPTR:\033[0m		" << *stringPTR << std::endl;
	std::cout << "\033[33mValue pointed to by stringREF:\033[0m		" << stringREF << std::endl;

	return 0;
}
