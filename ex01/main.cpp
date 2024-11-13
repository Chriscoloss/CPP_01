/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chorst <chorst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:37:12 by chorst            #+#    #+#             */
/*   Updated: 2024/10/16 11:42:22 by chorst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int N = 5;
	Zombie *horde = zombieHorde(N, "Zombie");
	for (int i = 0; i < N; i++)
	{
		horde[i].announce();
	}
	delete[] horde;
	return (0);
}
