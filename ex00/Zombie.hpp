/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chorst <chorst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 11:07:10 by chorst            #+#    #+#             */
/*   Updated: 2024/10/15 13:45:11 by chorst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	private:
				std::string _name;
	public:
				Zombie();
				Zombie(std::string name);
				~Zombie();
				void announce(void) const;
};

Zombie			*newZombie(std::string name);
void			randomChump(std::string name);

#endif
