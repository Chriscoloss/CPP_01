/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chorst <chorst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 12:08:06 by chorst            #+#    #+#             */
/*   Updated: 2024/10/16 16:51:50 by chorst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanB
{
	private:	Weapon *_weapon;
				std::string _name;
				bool has_weapon;
	public:
				HumanB(std::string name);
				~HumanB(void);
				void attack(void) const;
				void setWeapon(Weapon &weapon);
};

#endif
