/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbraquem <tbraquem@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 16:58:00 by tbraquem          #+#    #+#             */
/*   Updated: 2022/08/04 11:49:15 by tbraquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

//  _____                _                   _
// / ____|              | |                 | |
// | |     ___  _ __  ___| |_ _ __ _   _  ___| |_ ___  _ __ ___
// | |    / _ \| '_ \/ __| __| '__| | | |/ __| __/ _ \| '__/ __|
// | |___| (_) | | | \__ \ |_| |  | |_| | (__| || (_) | |  \__ \
// \______\___/|_| |_|___/\__|_|   \__,_|\___|\__\___/|_|  |___/

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap constructor called!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &f) : ClapTrap(f)
{
	(void) f;
}

//  _ ___                       _
// /  __ \                     | |
// | |  | |_ __   ___ _ __ __ _| |_ ___  _ __ ___
// | |  | | '_ \ / _ \ '__/ _` | __/ _ \| '__/ __|
// | |__| | |_) |  __/ | | (_| | || (_) | |  \__ \
// \_____/| .__/ \___|_|  \__,_|\__\___/|_|  |___/
// 	 | |
// 	 |_|


ScavTrap &ScavTrap::operator=(const ScavTrap &f)
{
	(void) f;
	return (*this);
}

//  _____            _                   _
// |  __ \          | |                 | |
// | |  | | ___  ___| |_ _ __ _   _  ___| |_ ___  _ __ ___
// | |  | |/ _ \/ __| __| '__| | | |/ __| __/ _ \| '__/ __|
// | |__| |  __/\__ \ |_| |  | |_| | (__| || (_) | |  \__ \
// |_____/ \___||___/\__|_|   \__,_|\___|\__\___/|_|  |___/

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called!" << std::endl;
}

//  ______                _   _
// |  ____|              | | (_)
// | |__ _   _ _ __   ___| |_ _  ___  _ __  ___
// |  __| | | | '_ \ / __| __| |/ _ \| '_ \/ __|
// | |  | |_| | | | | (__| |_| | (_) | | | \__ \
// |_|   \__,_|_| |_|\___|\__|_|\___/|_| |_|___/

void		ScavTrap::attack(const std::string &target)
{
	std::cout << "ScavTrap: " << this->_name << " attacks " << target << " -" << this->_damage << " life." << std::endl;
}

void		ScavTrap::guardGate()
{
	std::cout << "ScavTrap gate keeper mode!" << std::endl;
}
