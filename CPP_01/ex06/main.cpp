/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbraquem <tbraquem@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 15:42:21 by tbraquem          #+#    #+#             */
/*   Updated: 2022/07/28 14:26:10 by tbraquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Please use ./harlFilter <level>" << std::endl;
		return (0);
	}

	Harl	instance;

	instance.complain(argv[1]);
	return (0);
}
