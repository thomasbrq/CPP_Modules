/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbraquem <tbraquem@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 12:36:47 by tbraquem          #+#    #+#             */
/*   Updated: 2022/07/07 13:20:40 by tbraquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	std::cout << "Harl instance created!" << std::endl;
}

Harl::~Harl(void)
{
	std::cout << "Harl instance deleted!" << std::endl;
}

void	Harl::debug(void)
{
	std::cout << "Debug called!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "Info called!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "Warning called!" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "Error called!" << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string	levels[] = {
		"debug", "info", "warning", "error"
	};
	void (Harl::*functptr[])(void) = {
		&Harl::debug, &Harl::info, &Harl::warning, &Harl::error
	};
	for (int i=0; i < 4; i++)
		if (levels[i] == level)
			(*this.*functptr[i])();
}
