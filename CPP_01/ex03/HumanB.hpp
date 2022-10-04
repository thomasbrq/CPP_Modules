/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbraquem <tbraquem@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 13:32:46 by tbraquem          #+#    #+#             */
/*   Updated: 2022/07/28 12:44:11 by tbraquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"

class HumanB
{
public:
	HumanB(std::string name);
	~HumanB(void);

	void	attack(void);
	void	setWeapon(Weapon &weapon);

	std::string	name;
	Weapon		*weapon;
};

#endif
