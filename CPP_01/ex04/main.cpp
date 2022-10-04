/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbraquem <tbraquem@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 11:26:17 by tbraquem          #+#    #+#             */
/*   Updated: 2022/07/05 11:58:56 by tbraquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"
#include <iostream>

void	print_error(std::string error)
{
	std::cout << error << std::endl;
	exit(1);
}

int	main(int argc, char **argv)
{
	if (argc < 4 || argc > 4)
		print_error("Args error.. Use ./sed <filename> <s1> <s2>");
	Sed replacer(argv[1], argv[2], argv[3]);
	replacer.replace();
	return (0);
}
