/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbraquem <tbraquem@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 17:45:36 by tbraquem          #+#    #+#             */
/*   Updated: 2022/07/28 12:39:13 by tbraquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Constructor called!" << std::endl;
}

Zombie::Zombie(std::string name) : _name(name) {}

Zombie::~Zombie(void)
{
	std::cout << "Destructor called!" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->_name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}
