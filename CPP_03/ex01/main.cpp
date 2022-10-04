/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbraquem <tbraquem@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 13:58:08 by tbraquem          #+#    #+#             */
/*   Updated: 2022/08/04 11:49:29 by tbraquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	player("Meu123");

	std::cout << std::endl;
	player.attack("Brissboss123");
	player.guardGate();
	std::cout << std::endl;

	player.beRepaired(1);
	player.takeDamage(50);

	player.attack("Brissboss123");
	

	std::cout << std::endl;
	return (0);
}
