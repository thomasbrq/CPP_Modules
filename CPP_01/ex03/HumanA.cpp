/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbraquem <tbraquem@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 11:50:34 by tbraquem          #+#    #+#             */
/*   Updated: 2022/07/05 11:19:11 by tbraquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon)
{
	std::cout << "HumanA created!" << std::endl;
}

HumanA::~HumanA(void)
{
	std::cout << "HumanA deleted!" << std::endl;
}

void HumanA::attack(void)
{
	// <name> attacks with their <weapon type>
	std::cout 	<< this->name << " attacks with their "
				<< this->weapon.getType() << std::endl;
}
