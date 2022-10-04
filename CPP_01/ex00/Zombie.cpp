/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbraquem <tbraquem@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 17:45:36 by tbraquem          #+#    #+#             */
/*   Updated: 2022/06/30 11:06:33 by tbraquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{
	std::cout << "The Zombie " << name << " is born!" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << " died! :(" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->_name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}
