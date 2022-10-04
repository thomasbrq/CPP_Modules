/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbraquem <tbraquem@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 12:36:47 by tbraquem          #+#    #+#             */
/*   Updated: 2022/07/28 14:41:24 by tbraquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{

}

Harl::~Harl(void)
{

}

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "This is a debug message.." << std::endl;
	std::cout << std::endl;
	this->info();
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "This is an info message.." << std::endl;
	std::cout << std::endl;
	this->warning();
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I've been coming for years whereas you started working here since last month." << std::endl;
	std::cout << std::endl;
	this->error();
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
}

int	Harl::getIndex(std::string level) const
{
	std::string	levels[] = {
		"DEBUG", "INFO", "WARNING", "ERROR"
	};
	for (int i = 0; i < 4; i++)
		if (levels[i] == level)
			return (i);
	return (-1);
}

void	Harl::complain(std::string level)
{
	int	index;

	index = this->getIndex(level);
	switch (index)
	{
		case 0:
			this->debug();
			break;
		case 1:
			this->info();
			break;
		case 2:
			this->warning();
			break;
		case 3:
			this->error();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
