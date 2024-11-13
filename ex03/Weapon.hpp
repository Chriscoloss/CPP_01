/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chorst <chorst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 12:07:14 by chorst            #+#    #+#             */
/*   Updated: 2024/10/21 16:11:46 by chorst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class	Weapon
{
	private:
				std::string _type;
	public:
				Weapon(std::string str);
				~Weapon();
				const std::string& getType() const;
				void setType(const std::string str);
};

#endif

