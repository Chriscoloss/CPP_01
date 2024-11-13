/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chorst <chorst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 11:06:57 by chorst            #+#    #+#             */
/*   Updated: 2024/10/21 16:04:04 by chorst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{

	std::cout << "\033[32mCreating a Zombie with" << "\033[33m function -> newZombie " << "\033[32mon the heap\33[0m" << std::endl;

	Zombie *zombie1 = newZombie("David");
	zombie1->announce();
	delete zombie1;
	std::cout << std::endl;

	std::cout << "\033[32mCreating a Zombie with " << "\033[33mfunction -> randomChump " << "\33[32mon the stack\33[0m" << std::endl;
	randomChump("John");
	return (0);
}
