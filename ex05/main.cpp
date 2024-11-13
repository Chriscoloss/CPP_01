/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chorst <chorst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 11:38:26 by chorst            #+#    #+#             */
/*   Updated: 2024/10/21 16:30:36 by chorst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	Harl	obj;
	
	obj.complain("debug");
	obj.complain("info");
	obj.complain("warning");
	obj.complain("error");
	obj.complain("nonsense");
	return 0;
}
