/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbraquem <tbraquem@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 11:47:25 by tbraquem          #+#    #+#             */
/*   Updated: 2022/07/28 12:44:18 by tbraquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"
#include <iostream>

class HumanA
{
public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA(void);

	void	attack(void);

	std::string	name;
	Weapon		&weapon;
};

#endif
