/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chorst <chorst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 12:08:14 by chorst            #+#    #+#             */
/*   Updated: 2024/10/16 16:55:49 by chorst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	has_weapon = false;
}

HumanB::~HumanB()
{
}

void HumanB::attack(void) const
{
	if (has_weapon == true)
		std::cout << _name << " attacks with their " << this->_weapon->getType() << std::endl;
	else
		std::cout << _name << "no weapon" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	has_weapon = true;
	_weapon = &weapon;
}
