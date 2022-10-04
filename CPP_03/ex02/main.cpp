/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbraquem <tbraquem@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 13:58:08 by tbraquem          #+#    #+#             */
/*   Updated: 2022/08/04 11:43:14 by tbraquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	player("Uem");

	std::cout << std::endl;

	player.attack("BossBriss");
	player.highFivesGuys();

	std::cout << std::endl;
	return (0);
}
