/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbraquem <tbraquem@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 17:55:00 by tbraquem          #+#    #+#             */
/*   Updated: 2022/07/01 11:28:54 by tbraquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int		size = 3;
	Zombie	*horde = zombieHorde(size, "Castor");

	for (int i=0; i < size; i++)
		horde[i].announce();

	delete [] horde;
	return (0);
}
