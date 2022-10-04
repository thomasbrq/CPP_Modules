/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbraquem <tbraquem@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 13:58:26 by tbraquem          #+#    #+#             */
/*   Updated: 2022/08/04 11:48:09 by tbraquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _life(100), _energy(50), _damage(20)
{
	std::cout << "Constructor ClapTrap called!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &f)
{
	*this = f;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &f)
{
	(void) f;
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor ClapTrap called!" << std::endl;
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->_life <= 0)
	{
		std::cout << "No enough life!" << std::endl;
		return;
	}

	if (this->_energy <= 0)
	{
		std::cout << "No enough energy!" << std::endl;
		return;
	}

	std::cout << this->_name << " attacks " << target;
	std::cout << ", causing " << this->_damage << " points of damage!" << std::endl;
	this->_energy -= 1;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (amount <= 0)
		return;

	if (this->_life <= 0)
	{
		std::cout << "No enough life!" << std::endl;
		return;
	}

	if (this->_energy <= 0)
	{
		std::cout << "No enough energy!" << std::endl;
		return;
	}

	std::cout << "+" << amount << " damage points." << std::endl;
	this->_damage += amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_life <= 0)
	{
		std::cout << "No enough life!" << std::endl;
		return;
	}

	if (this->_energy <= 0)
	{
		std::cout << "No enough energy!" << std::endl;
		return;
	}

	if (amount == 0)
	{
		std::cout << "+0 life point, The healing spell failed.." << std::endl;
		return;
	}

	if (this->_life == 100)
	{
		std::cout << "+0 life point, You are full of life." << std::endl;
		return;
	}

	std::cout << "+" << amount << " life point.. Good!" << std::endl;
	this->_life += amount;
	this->_energy -= 1;
}

int			ClapTrap::getLife(void) const
{
	return (this->_life);
}

int			ClapTrap::getEnergy(void) const
{
	return (this->_energy);
}

int			ClapTrap::getDamage(void) const
{
	return (this->_damage);
}
