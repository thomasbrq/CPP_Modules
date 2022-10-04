/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbraquem <tbraquem@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 14:22:40 by tbraquem          #+#    #+#             */
/*   Updated: 2022/06/28 14:44:07 by tbraquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

char *str_to_upper(char *string)
{
	for (int i = 0; string[i]; i++)
		string[i] = toupper(string[i]);
	return (string);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);		
	}
	for (int i=1; i < argc; i++)
		std::cout << str_to_upper(argv[i]);
	std::cout << std::endl;
	return (0);
}
