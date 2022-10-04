/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbraquem <tbraquem@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 13:58:29 by tbraquem          #+#    #+#             */
/*   Updated: 2022/08/03 16:50:11 by tbraquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ClapTrap_HPP
#define ClapTrap_HPP

#include <iostream>

class ClapTrap
{

public:
    ClapTrap(std::string name);
	ClapTrap(const ClapTrap &f);
	ClapTrap&operator=(const ClapTrap &f);
    ~ClapTrap(void);

	void		attack(const std::string &target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);

	int			getLife(void) const;
	int			getEnergy(void) const;
	int			getDamage(void) const;

private:
	std::string	_name;
	int			_life;
	int			_energy;
	int			_damage;

};


#endif
