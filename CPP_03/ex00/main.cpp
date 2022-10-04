/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbraquem <tbraquem@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 13:58:08 by tbraquem          #+#    #+#             */
/*   Updated: 2022/08/03 16:53:09 by tbraquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	player("Meu");

	std::cout << "Values: " << std::endl;

	std::cout << "Life: " << player.getLife() << std::endl;
	std::cout << "Energy: " << player.getEnergy() << std::endl;
	std::cout << "Damage points: " << player.getDamage() << std::endl;

	std::cout << std::endl;

	player.attack("Brissboss");
	player.takeDamage(0);
	player.takeDamage(42);

	std::cout << std::endl;

	std::cout << "Values: " << std::endl;

	std::cout << "Life: " << player.getLife() << std::endl;
	std::cout << "Energy: " << player.getEnergy() << std::endl;
	std::cout << "Damage points: " << player.getDamage() << std::endl;

	std::cout << std::endl;

	player.beRepaired(0);
	player.beRepaired(10);

	player.attack("Brissboss");

	std::cout << std::endl;

	std::cout << "Values: " << std::endl;

	std::cout << "Life: " << player.getLife() << std::endl;
	std::cout << "Energy: " << player.getEnergy() << std::endl;
	std::cout << "Damage points: " << player.getDamage() << std::endl;

	player.attack("Brissboss");
	player.attack("Brissboss");
	player.attack("Brissboss");
	player.attack("Brissboss");
	player.takeDamage(8);
	player.attack("Brissboss");
	player.attack("Brissboss");
	player.attack("Brissboss");
	player.attack("Brissboss");

	player.attack("Brissboss");
	player.beRepaired(10);

	return (0);
}
