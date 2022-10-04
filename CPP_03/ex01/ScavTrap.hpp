/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbraquem <tbraquem@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 16:58:02 by tbraquem          #+#    #+#             */
/*   Updated: 2022/08/04 11:23:12 by tbraquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ScavTrap_HPP
#define ScavTrap_HPP

#include "ClapTrap.hpp"

#include <iostream>

class ScavTrap : public ClapTrap
{

public:
    ScavTrap(std::string name);
	ScavTrap(const ScavTrap &f);
	ScavTrap&operator=(const ScavTrap &f);
    ~ScavTrap(void);

	void		attack(const std::string &target);
	void		guardGate();

private:


};


#endif
