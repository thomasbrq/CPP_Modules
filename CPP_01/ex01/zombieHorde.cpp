/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbraquem <tbraquem@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 12:21:07 by tbraquem          #+#    #+#             */
/*   Updated: 2022/07/01 10:45:41 by tbraquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	if (N <= 0)
		return (NULL);
	Zombie	*horde = new Zombie[N];

	for (int i=0; i < N; i++)
		horde[i] = Zombie(name + " " + std::to_string((i+1)));

	return (horde);
}
