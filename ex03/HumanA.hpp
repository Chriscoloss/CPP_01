/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chorst <chorst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 12:07:34 by chorst            #+#    #+#             */
/*   Updated: 2024/10/16 16:45:01 by chorst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanA
{
	private:	std::string _name;
				Weapon &_weapon;
	public:
				HumanA(std::string name, Weapon &weapon);
				~HumanA(void);
				void attack(void) const;
};

#endif
