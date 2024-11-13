/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chorst <chorst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:41:57 by chorst            #+#    #+#             */
/*   Updated: 2024/10/16 13:02:11 by chorst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *horde = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		horde[i].set_name(name);
	}
	return (horde);
}

//
// This function is to ensure that the zombieHorde() function works as expected:
// ########
// Line 20:
// horde[i].set_name(name + std::to_string(i));
