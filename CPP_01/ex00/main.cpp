/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbraquem <tbraquem@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 17:55:00 by tbraquem          #+#    #+#             */
/*   Updated: 2022/07/05 10:58:30 by tbraquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombie1;

	zombie1 = newZombie("Castor");
	zombie1->announce();
	delete zombie1;

	std::cout << std::endl;

	randomChump("Nini");

	return (0);
}
