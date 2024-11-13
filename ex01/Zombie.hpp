/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chorst <chorst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:39:30 by chorst            #+#    #+#             */
/*   Updated: 2024/10/16 11:35:10 by chorst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class	Zombie
{
	private:
				std::string	_name;
	public:
				Zombie(void);
				~Zombie();
				void	announce(void) const;
				void	set_name(std::string str);
};

Zombie*			zombieHorde(int N, std::string name);

#endif
