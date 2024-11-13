/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chorst <chorst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 12:07:22 by chorst            #+#    #+#             */
/*   Updated: 2024/10/16 16:55:01 by chorst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string str)
{
	_type = str;
}

Weapon::~Weapon()
{
}

const std::string &Weapon::getType() const
{
	return (_type);
}

void Weapon::setType(const std::string str)
{
	_type = str;
}
