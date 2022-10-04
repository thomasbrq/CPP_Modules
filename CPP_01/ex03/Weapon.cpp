/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbraquem <tbraquem@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 11:40:18 by tbraquem          #+#    #+#             */
/*   Updated: 2022/07/28 12:43:52 by tbraquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void) : _type("")
{
	std::cout << "Weapon instance created!" << std::endl;
}

Weapon::Weapon(std::string type) : _type(type)
{

}

Weapon::~Weapon(void)
{
	std::cout << "Weapon instance deleted!" << std::endl;
}

std::string Weapon::getType(void) const
{
	return (this->_type);
}

void		Weapon::setType(std::string type)
{
	this->_type = type;
}
