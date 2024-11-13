/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chorst <chorst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 11:39:50 by chorst            #+#    #+#             */
/*   Updated: 2024/10/21 15:07:41 by chorst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl
{
	private:
				void debug(void);
				void info(void);
				void warning(void);
				void error(void);
	public:
				Harl();
				~Harl();
				void	complain(std::string level);

};

#endif
