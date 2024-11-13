/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chorst <chorst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:39:06 by chorst            #+#    #+#             */
/*   Updated: 2024/10/16 11:35:31 by chorst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << this->_name << "\033[32mA Zombie has been spawned\033[0m" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << _name << "\033[31m has been killed\033[0m" << std::endl;
}

void Zombie::announce(void) const
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::set_name(std::string str)
{
	this->_name = str;
}
