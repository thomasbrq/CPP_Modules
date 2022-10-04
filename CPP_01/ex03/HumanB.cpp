/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbraquem <tbraquem@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 13:33:58 by tbraquem          #+#    #+#             */
/*   Updated: 2022/07/05 11:23:00 by tbraquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name)
{
	std::cout << "HumanB created!" << std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << "HumanB deleted!" << std::endl;
}

void HumanB::attack(void)
{
	// <name> attacks with their <weapon type>
	std::cout 	<< this->name << " attacks with their "
				<< this->weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
