/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbraquem <tbraquem@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 15:42:21 by tbraquem          #+#    #+#             */
/*   Updated: 2022/07/07 13:20:23 by tbraquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl	instance;

	instance.complain("info");
	instance.complain("debug");
	instance.complain("error");
	instance.complain("warning");
	return (0);
}
